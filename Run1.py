import os
from misc.utils import clear

def main():
    # rescale_job("TestJobWait")
    clear()
    local_job()


def rescale_job(name):
    from fastfea.rescale import Job

    job = Job()
    job.upload(
        files=[
            '01_settings.inc', 
            '02_material.inc', 
            '03_seabed.inc', 
            '04_cent_springs.inc', 
            '05_interactions.inc', 
            '06_model_definition.inc', 
            '07_trawl.inc',  
            '00_hmlt_base_case.inp', 
            'ab_script.py', 
            'onefric_312.o'
        ]
    )

    job.create(
        name=name,
        command="\n".join([
            "sed -i 's/.*lmhanglimit.*/lmhanglimit=240/g' $HOME/abaqus_v6.env",
            "sed -i 's/.*lmsvrdownlimit.*/lmsvrdownlimit=240/g' $HOME/abaqus_v6.env",
            "abaqus job=00_hmlt_base_case.inp user=onefric_312.o cpus=4 mp_mode=mpi double=both interactive",
            "abaqus view noGUI=ab_script.py"
        ]),
        abq_version="6.14-3",
        ncores=4,
    )
    job.submit()


def local_job():
    os.system("call abq6142 job=00_hmlt_base_case cpus=2 int ask_delete=OFF")


if __name__ == "__main__":
    main()
