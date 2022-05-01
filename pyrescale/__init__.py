import requests
import json
# from utils import *




# class Job:
#     def __init__(self):
#         self.storage_id = []
#         self.api_key=api_key
    
    
#     def upload(self, files):
#         for f in files:
#             self.storage_id.append({"id": Job.upload_one(f, self.api_key)})

#     def add_odbfile(self, cae_jobid = None):
#         self.cae_jobid = cae_jobid
#         odblist = Job.find_file(file=".odb", rescale_jobid=cae_jobid)

#         if len(odblist) > 1:
#             raise Exception("More than one odb file found")
#         else: 
#             self.odbname, self.odb_id = odblist[0]
#             self.storage_id.append({"id": self.odb_id})

#     def create(self, name, command, abq_version, ncores, machine):
       
#         abq_dict =  {"6.14-3": '6.14.3-pcmpi', "2020": '2020-2038'}
#         resp=requests.post(
#           'https://platform.rescale.com/api/v2/jobs/',
#           json={
#               'name': name,
#               'jobanalyses': [
#                   {
#                       'analysis': {
#                         'code': 'abaqus',
#                         'version': abq_dict[abq_version]
#                       },
#                     #   'command': f'abaqus job={mainfile} cpus=$RESCALE_CORES_PER_SLOT mp_mode=mpi double=both interactive',
#                       'command': command,
#                       'hardware': {
#                           'coreType': 'emerald_max',
#                           'coresPerSlot': ncores
#                       },
#                     'inputFiles': self.storage_id,
#                      'envVars': {
#                         'LM_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51',
#                         'ADSKFLEX_LICENSE_FILE': '27101@10.113.36.117:27101@172.22.20.51',
#                   }
#                   }
#               ]
#           },

#           headers={'Content-Type': 'application/json',
#                    'Authorization': f'Token {self.api_key}'}
#         )

#         check_response(resp)
#         self.create_content=json.loads(resp.content)
#         self.job_id=self.create_content["id"]
    
#     def submit(self):
#         resp = requests.post(
#             f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/submit/',
#             headers={'Authorization': f'Token {self.api_key}'} )
#         check_response(resp)


#     def get_status(self):
#         resp=requests.get(
#             f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/statuses/',
#             headers={'Authorization': f'Token {self.api_key}'}
#         )
#         check_response(resp)

#         self.status_content = json.loads(resp.content)
#         self.status= self.status_content["results"][0]["status"]
#         return self.status
    
#     def get_fileslist(self):
#         resp=requests.get(
#             f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/files/',
#             headers={'Authorization': f'Token {self.api_key}'}
#         )
#         check_response(resp)

#         self.filelist = json.loads(resp.content)
 
        
#     def tail(self, file="reeling.sta", lines=5):
#         if self.status == "Executing":
#             resp=requests.get(
#                 f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/runs/1/tail/shared/{file}',
#                 headers={'Authorization': f'Token {self.api_key}'} ,
#                 params={'lines': lines}
#             )
#             check_response(resp)

#             self.tail_content=json.loads(resp.content)
#             return self.tail_content["lines"]
#         else:
#             return "Job not started"
    
#     def delete(self):
#         # for id in self.storage_id:
#         #     resp = requests.delete(
#         #         f'https://platform.rescale.com/api/v2/files/{id}/',
#         #         headers={'Authorization': f'Token {self.api_key}'} )
#         #     check_response(resp)

#         resp = requests.post(
#             f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/shutdown/',
#             headers={'Authorization': f'Token {self.api_key}'} )
#         check_response(resp)
            
#         resp = requests.delete(
#             f'https://platform.rescale.com/api/v2/jobs/{self.job_id}/',
#             headers={'Authorization': f'Token {self.api_key}'} )
#         check_response(resp)


#     @staticmethod
#     def upload_one(file, api_key):
#         resp = requests.post(
#           'https://platform.rescale.com/api/v2/files/contents/',
#           data=None,
#           files={'file': open(file,'rb')},
#           headers={'Authorization': f'Token {api_key}'} 
#         )

#         check_response(resp)

#         upload_content=json.loads(resp.content)
#         return upload_content["id"]

#     @staticmethod
#     def find_file(file, rescale_jobid, max_size = 1):
#         resp = requests.get(
#                 f'https://platform.rescale.com/api/v2/jobs/{rescale_jobid}/files/?search={file}&page_size=30',
#                 headers={'Authorization': f'Token {self.api_key}'} )                    
#         check_response(resp)
  
#         if json.loads(resp.content)["count"] == 0:
#             raise Exception(f"No {file} file found") 
#         elif json.loads(resp.content)["count"]  > max_size:
#             raise Exception(f"More than {max_size} {file} file found")    
#         else:
#             return [[file["name"], file["id"]] for file in json.loads(resp.content)['results']]
    










