import requests
from rich import print as rprint
import json


class Job:
    def __init__(self):
        pass
    
    api_key="ed7021746c2ce248fc615dadd14830f49dee9510"
    
    def upload(self, file='inputfiles.zip'):
        resp = requests.post(
          'https://platform.rescale.com/api/v2/files/contents/',
          data=None,
          files={'file': open(file,'rb')},
          headers={'Authorization': f'Token {Job.api_key}'} 
        )
        self.upload_content=json.loads(resp.content)
        self.storage_id=self.upload_content["id"]
    
    def create(self, name="Untitled"):
        resp=requests.post(
          'https://platform.rescale.com/api/v2/jobs/',
          json={
              'name': name,
              'jobanalyses': [
                  {
                      'analysis': {
                        'code': 'abaqus',
                        'version': '2020-2038',
                      },
                      'command': 'abaqus job=reeling.inp cpus=$RESCALE_CORES_PER_SLOT mp_mode=mpi double=both interactive',
                      'hardware': {
                          'coreType': 'emerald',
                          'coresPerSlot': 1
                      },
                    'inputFiles': [{'id': self.storage_id}],
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
        self.create_content=json.loads(resp.content)
        self.job_id=self.create_content["id"]
    
    def submit(self):
        requests.post(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/submit/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        
    def get_status(self):
        resp=requests.get(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/statuses/',
            headers={'Authorization': f'Token {Job.api_key}'}
        )
        self.status_content = json.loads(resp.content)
        self.status= self.status_content["results"][0]["status"]
        return self.status
    
    def get_fileslist(self):
        resp=requests.get(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/files/',
            headers={'Authorization': f'Token {Job.api_key}'}
        )
        self.filelist = json.loads(resp.content)
 
        
    def tail(self, file="reeling.sta", lines=5):
        if self.status == "Executing":
            resp=requests.get(
                f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/tail/shared/{file}',
                headers={'Authorization': f'Token {Job.api_key}'} ,
                params={'lines': lines}
            )
            self.tail_content=json.loads(resp.content)
            print(*self.tail_content["lines"], sep = "\n")
        else:
            rprint("Job not started")
    
    def delete(self):
        requests.post(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/shutdown/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        requests.delete(
            f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/',
            headers={'Authorization': f'Token {Job.api_key}'} )        
        requests.delete(
            f'https://platform.rescale.com/api/v2/files/{self.storage_id}/',
            headers={'Authorization': f'Token {Job.api_key}'} )
        