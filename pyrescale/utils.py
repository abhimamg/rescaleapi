import numpy as np
import pandas as pd
import time
from datetime import datetime

def get_progress(job):
    tic = datetime.now() 
    while job.status!="Completed":
        job.get_status()
        clear_output(wait=True)
        print(f'[{tac(tic)}] Status: {job.status}')
        time.sleep(10)
        i = i+1

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

def save_output(cae_job, pp_job, file="AbaqusOutput.txt"):
    file_id = Job.find_file(file=file, rescale_jobid=pp_job, max_size=1)[0][1]
    resp = requests.get(
        f'https://platform.rescale.com/api/v2/files/{file_id}/contents',
        headers={'Authorization': f'Token {self.api_key}'} ) 

    with open(f'AbaqusOutput_{cae_job}.txt', 'wb') as fd:
        for chunk in resp.iter_content():
            fd.write(chunk)
    print(f'AbaqusOutput_{cae_job}.txt saved')

def check_response(resp):
    if resp.status_code ==404:
        print(resp.status_code)
        raise Exception(json.loads(resp.content))


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