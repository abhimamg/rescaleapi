# from pyrescale import Job
from strictyaml import load
import requests
import json
import os

def main(yml = "input.yml"):
    with open (yml, "r") as f:
        yml = load(f.read()).data

    job_name = yml.get('Job Name', 'Untitled')
    machine = yml.get('Machine', "emerald_max") 
    ncores = yml.get('Cores', 4)
    abq_ver = yml['Abaqus Version']
    api_key = yml['API Key']
    inp_files = yml['Input Files']
    command = yml['Command']
    job_id = "ere"

    # storage = upload(inp_files, api_key)
    # job_id = create(job_name, command, abq_ver, ncores, machine, storage, api_key)
    # submit(job_id, api_key)
    cwd = os.getcwd()
    os.system("git add .")
    os.system(f"git commit -m '{job_id}'")
    return cwd

def submit(job_id, api_key):
    resp = requests.post(
        f'https://platform.rescale.com/api/v2/jobs/{job_id}/submit/',
        headers={'Authorization': f'Token {api_key}'} )
    check_response(resp)

def upload(inp_files, api_key):
    storage = [{"id": upload_one(f, api_key)} for f in inp_files]
    return storage

def upload_one(file, api_key):
    resp = requests.post(
        'https://platform.rescale.com/api/v2/files/contents/',
        data=None,
        files={'file': open(file,'rb')},
        headers={'Authorization': f'Token {api_key}'} 
    )
    check_response(resp)
    content=json.loads(resp.content)
    return content["id"] 

def check_response(resp):
    if resp.status_code ==404:
        print(resp.status_code)
        raise Exception(json.loads(resp.content))

def create(job_name, command, abq_ver, ncores, machine, storage, api_key): 
    abq_ver =  {
        "6.14-3": '6.14.3-pcmpi', 
        "2020": '2020-2038'}[abq_ver]

    resp=requests.post(
        'https://platform.rescale.com/api/v2/jobs/',
        json={
            'name': job_name,
            'jobanalyses': [
                {
                    'analysis': {
                    'code': 'abaqus',
                    'version': abq_ver
                    },
                    'command': "\n".join(command),
                    'hardware': {
                        'coreType': machine,
                        'coresPerSlot': ncores
                    },
                'inputFiles': storage,
                    'envVars': {
                    'LM_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51',
                    'ADSKFLEX_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51',
                }
                }
            ]
        },

        headers={'Content-Type': 'application/json',
                'Authorization': f'Token {api_key}'}
    )

    check_response(resp)
    content=json.loads(resp.content)
    return content["id"]










print(main())
