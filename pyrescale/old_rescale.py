import requests
from rich import print as rprint
import json
import time
from IPython.display import clear_output
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from datetime import datetime 

class Job:
    def __init__(self):
        self.storage_id = []
        pass
    
    api_key="ed7021746c2ce248fc615dadd14830f49dee9510"
    
    def upload(self, files):
        for f in files:
            self.storage_id.append({"id": Job.upload_one(f)})

    def add_odbfile(self, cae_jobid = None):
        self.cae_jobid = cae_jobid
        odblist = Job.find_file(file=".odb", rescale_jobid=cae_jobid)

        if len(odblist) > 1:
            raise Exception("More than one odb file found")
        else: 
            self.odbname, self.odb_id = odblist[0]
            self.storage_id.append({"id": self.odb_id})

    def create(self, name, command, abq_version, ncores):
       
        abq_dict =  {"6.14-3": '6.14.3-pcmpi'}
        resp=requests.post(
          'https://platform.rescale.com/api/v2/jobs/',
          json={
              'name': name,
              'jobanalyses': [
                  {
                      'analysis': {
                        'code': 'abaqus',
                        # 'version': '2020-2038',
                        'version': abq_dict[abq_version]
                      },
                    #   'command': f'abaqus job={mainfile} cpus=$RESCALE_CORES_PER_SLOT mp_mode=mpi double=both interactive',
                      'command': command,
                      'hardware': {
                          'coreType': 'emerald_max',
                          'coresPerSlot': ncores
                      },
                    'inputFiles': self.storage_id,
                     'envVars': {
                        'LM_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51:27101@10.113.36.117:27101@172.22.20.51:27101@10.113.36.117:27101@172.22.20.51',
                        'ADSKFLEX_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51:27101@10.113.36.117:27101@172.22.20.51:27101@10.113.36.117:27101@172.22.20.51',
                  }
                  }
              ]
          },

          headers={'Content-Type': 'application/json',
                   'Authorization': f'Token {Job.api_key}'}
        )

        check_response(resp)
        self.create_content=json.loads(resp.content)
        self.job_id=self.create_content["id"]
    
    def submit(self):
        resp = requests.post(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/submit/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        check_response(resp)


    def get_status(self):
        resp=requests.get(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/statuses/',
            headers={'Authorization': f'Token {Job.api_key}'}
        )
        check_response(resp)

        self.status_content = json.loads(resp.content)
        self.status= self.status_content["results"][0]["status"]
        return self.status
    
    def get_fileslist(self):
        resp=requests.get(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/files/',
            headers={'Authorization': f'Token {Job.api_key}'}
        )
        check_response(resp)

        self.filelist = json.loads(resp.content)
 
        
    def tail(self, file="reeling.sta", lines=5):
        if self.status == "Executing":
            resp=requests.get(
                f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/tail/shared/{file}',
                headers={'Authorization': f'Token {Job.api_key}'} ,
                params={'lines': lines}
            )
            check_response(resp)

            self.tail_content=json.loads(resp.content)
            return self.tail_content["lines"]
        else:
            return "Job not started"
    
    def delete(self):
        # for id in self.storage_id:
        #     resp = requests.delete(
        #         f'https://platform.rescale.com/api/v2/files/{id}/',
        #         headers={'Authorization': f'Token {Job.api_key}'} )
        #     check_response(resp)

        resp = requests.post(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/shutdown/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        check_response(resp)
            
        resp = requests.delete(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        check_response(resp)


    @staticmethod
    def upload_one(file):
        resp = requests.post(
          'https://platform.rescale.com/api/v2/files/contents/',
          data=None,
          files={'file': open(file,'rb')},
          headers={'Authorization': f'Token {Job.api_key}'} 
        )

        check_response(resp)

        upload_content=json.loads(resp.content)
        return upload_content["id"]

    @staticmethod
    def find_file(file, rescale_jobid, max_size = 1):
        resp = requests.get(
                f'https://platform.rescale.com/api/v2/jobs/{rescale_jobid}/files/?search={file}&page_size=30',
                headers={'Authorization': f'Token {Job.api_key}'} )                    
        check_response(resp)
  
        if json.loads(resp.content)["count"] == 0:
            raise Exception(f"No {file} file found") 
        elif json.loads(resp.content)["count"]  > max_size:
            raise Exception(f"More than {max_size} {file} file found")    
        else:
            return [[file["name"], file["id"]] for file in json.loads(resp.content)['results']]
    
    @staticmethod
    def get_progress(job):
        tic = datetime.now() 
        while job.status!="Completed":
            job.get_status()
            clear_output(wait=True)
            print(f'[{tac(tic)}] Status: {job.status}')
            time.sleep(10)
            i = i+1

    # @staticmethod
    # def save_output(cae_job, pp_job, file="AbaqusOutput.txt"):
    #     file_id = Job.find_file(file=file, rescale_jobid=pp_job, max_size=1)[0][1]
    #     resp = requests.get(
    #         f'https://platform.rescale.com/api/v2/files/{file_id}/contents',
    #         headers={'Authorization': f'Token {Job.api_key}'} ) 

    #     with open(f'AbaqusOutput_{cae_job}.txt', 'wb') as fd:
    #         for chunk in resp.iter_content():
    #             fd.write(chunk)
    #     print(f'AbaqusOutput_{cae_job}.txt saved')


def plot_progress(job):
    for _ in range(200):
        plt.figure(figsize=(11,4))
        x=job.tail(lines=1000)
        y=pd.DataFrame([i.split() for i in x[5:]]).apply(pd.to_numeric, errors="ignore")
        clear_output(wait=True)
        (y[7]*100).plot(label="")


        tail=y.tail(1).values.flatten()
        plt.scatter(len(y), tail[7]*100, color="b",
                label=f'Step: {int(tail[0])}\nProgress: {round(tail[7]*100, 2)}%')  
        plt.yticks(np.arange(0, 125, 25))
        plt.xlabel("Increments")
        plt.ylabel("Progress [%]")

        plt.legend()
        plt.show()
        time.sleep(2)

def check_response(resp):
    if resp.status_code ==404:
        print(resp.status_code)
        raise Exception(json.loads(resp.content))

def tac(tic):
    tac = datetime.now() - tic
    return str(tac).split(".")[0]

    def get_progress(job):
        tic = datetime.now() 
        while job.status!="Completed":
            job.get_status()
            clear_output(wait=True)
            print(f'[{tac(tic)}] Status: {job.status}')
            time.sleep(10)
            i = i+1

