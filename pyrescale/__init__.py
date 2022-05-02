import requests
import json
from strictyaml import load
import os
import pyrescale as pr
import click
from datetime import datetime


@click.command()
@click.option("--run", default= "input.yml", help="Location of Input YML file")
def main(run):
    with open(run, "r") as f:
        yml = load(f.read()).data
    job_type = yml.get("Job Type", "New")

    if job_type=="New":
        new_job(yml)
    elif job_type=="Download":
        download(yml)

def download(yml):
    api_key = yml["API Key"]
    del yml["API Key"]
    del yml["Job Type"]

    for k,v in yml.items():
        for v1 in v:
            download_one(job_id=k, file=v1, api_key=api_key)


def new_job(yml):
    job_name = yml.get("Job Name", "Untitled")
    message=yml.get("Message", "")
    machine = yml.get("Machine", "Emerald Max")
    ncores = yml.get("Cores", 2)
    abq_ver = yml["Abaqus Version"]
    api_key = yml["API Key"]
    files = yml["Upload Files"]
    command = yml["Command"]
    git_track = yml.get("Use Git", False)
    lic = yml.get("License", ["27101@10.113.36.117", "27101@172.22.20.51"])

    storage = pr.upload(files, api_key)

    if "Rescale Files" in yml.keys():
        storage = add_files(storage=storage, rescale_files=yml["Rescale Files"], api_key=api_key)

    job_id = pr.create(
            job_name, message, command, abq_ver, ncores, machine, storage, api_key, lic
        )
    # pr.submit(job_id, api_key)
    if git_track:
        os.system("git add .")
        commit_message = f'{job_id}: {message}'
        os.system(f'git commit --allow-empty -m "{commit_message}"')


def submit(job_id, api_key):
    resp = requests.post(
        f"https://platform.rescale.com/api/v2/jobs/{job_id}/submit/",
        headers={"Authorization": f"Token {api_key}"},
    )
    check_response(resp)


def upload(files, api_key):
    storage = [{"id": upload_one(f, api_key)} for f in files]
    return storage


def upload_one(file, api_key):
    resp = requests.post(
        "https://platform.rescale.com/api/v2/files/contents/",
        data=None,
        files={"file": open(file, "rb")},
        headers={"Authorization": f"Token {api_key}"},
    )
    check_response(resp)
    content = json.loads(resp.content)
    return content["id"]


def check_response(resp):
    if resp.status_code == 404:
        print(resp.status_code)
        raise Exception(json.loads(resp.content))


def create(job_name, message, command, abq_ver, ncores, machine, storage, api_key, lic):

    abq_ver = {"6.14-3": "6.14.3-pcmpi", "2020": "2020-2038"}[abq_ver]
    machine = {"Emerald Max": "emerald_max", "Emerald": "emerald"}[machine]

    resp = requests.post(
        "https://platform.rescale.com/api/v2/jobs/",
        json={
            "name": job_name,
            "description": message,
            "jobanalyses": [
                {
                    "analysis": {"code": "abaqus", "version": abq_ver},
                    "command": "\n".join(command),
                    "hardware": {"coreType": machine, "coresPerSlot": ncores},
                    "inputFiles": storage,
                    "envVars": {
                        "LM_LICENSE_FILE": ":".join(lic),
                        "ADSKFLEX_LICENSE_FILE": ":".join(lic),
                    },
                }
            ],
        },
        headers={
            "Content-Type": "application/json",
            "Authorization": f"Token {api_key}",
        },
    )

    check_response(resp)
    content = json.loads(resp.content)
    return content["id"]


def find_file(file, rescale_jobid, api_key, max_size = 1):
    resp = requests.get(
            f'https://platform.rescale.com/api/v2/jobs/{rescale_jobid}/files/?search={file}&page_size=30',
            headers={'Authorization': f'Token {api_key}'} )                    
    check_response(resp)

    if json.loads(resp.content)["count"] == 0:
        raise Exception(f"No {file} file found") 
    elif json.loads(resp.content)["count"]  > max_size:
        raise Exception(f"More than {max_size} {file} file found")    
    else:
        return json.loads(resp.content)['results'][0]["id"]


def add_odbfile(storage, cae_jobid, api_key):
    odblist = find_file(file=".odb", rescale_jobid=cae_jobid, api_key=api_key)
    _, odb_id = odblist[0]
    storage.append({"id": odb_id})
    return storage

def add_files(storage, rescale_files, api_key):
    if isinstance(rescale_files, dict):
        for k, v in rescale_files.items():
            if v=="All":
                storage = storage + [{"id": f} for f in get_jobfiles(job_id=k, api_key=api_key)]            
            else:
                for v1 in v:
                    storage.append({"id": find_file(v1, k, api_key, max_size = 1)})

    elif isinstance(rescale_files, list):
        storage = storage + [{"id": f} for f in rescale_files]

    elif rescale_files=="All":
        storage = storage + [{"id": f} for f in get_jobfiles(job_id, api_key)]


    
    else:
        Exception("Incompatibe File Type for Rescale Files")

    return storage

def download_one(job_id, file, api_key):
    file_id = find_file(file=file, rescale_jobid=job_id, api_key=api_key)
    resp = requests.get(
        f'https://platform.rescale.com/api/v2/files/{file_id}/contents',
        headers={'Authorization': f'Token {api_key}'} ) 

    fname=f'{file.split(".")[0]}_{job_id}.{file.split(".")[1]}'
    with open(fname, 'wb') as fd:
        for chunk in resp.iter_content(10000):
            fd.write(chunk)

def tac(tic):
    tac = datetime.now() - tic
    return str(tac).split(".")[0]

def get_jobfiles(job_id, api_key):
  resp=requests.get(
    f'https://platform.rescale.com/api/v2/jobs/{job_id}/files/?search=&page=1&page_size=1000',
    headers={'Authorization': f'Token {api_key}'}
  )
  content = json.loads(resp.content)

  files=[d['id'] for d in content['results'] if d['name']!='process_output.log']
  return files