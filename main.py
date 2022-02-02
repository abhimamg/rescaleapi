import requests
from rich import print as rprint
import json

api_key="ed7021746c2ce248fc615dadd14830f49dee9510"

# file_upload = requests.post(
#   'https://platform.rescale.com/api/v2/files/contents/',
#   data=None,
#   files={'file': open('input.zip','rb')},
#   headers={'Authorization': f'Token {api_key}'} 
# )
# y = json.loads(file_upload.content)

# rprint(y)
file_id="QuSNdn"

resp=requests.post(
  'https://platform.rescale.com/api/v2/jobs/',

  json={
      'name': 'Example Job',
      'jobanalyses': [
          {
              'analysis': {
                  'code': 'user_included',
                  'version': '0'
              },
              'command': 'echo "Hello world"',
              'hardware': {
                  'coreType': 'emerald',
                  'coresPerSlot': 1
              }
          }
      ]
  },

  headers={'Content-Type': 'application/json',
           'Authorization': f'Token {api_key}'}
)



job_id="kmYfEc"
requests.post(
  f'https://platform.rescale.com/api/v2/jobs/{job_id}/submit/',
           headers={'Authorization': f'Token {api_key}'} )


y = json.loads(resp.content)
rprint(y)
with open("jobs.txt", "w") as f:
    f.write(str(y))


