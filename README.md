# Introduction 
Python API for managing projects on rescale

# Getting Started
## Create new environment
`python -m venv %userprofile%\.virtualenvs\prs`
or
`conda create -n prs python=3.9`
## Activate environment
`%userprofile%\.virtualenvs\prs\Scripts\activate`
or
`conda activate prs`
## Install whl file
`pip install pyrescale-0.0.1-py3-none-any.whl`


# Create YML File
Use the sample yml file as starting point.

```yml
#Input.yml
Job Name: PROJ A
Message: Reduced Stab to 0.1 in step 4
API Key: xxxxxxxxxxxxxxxxxxxxxxxxxxxx

Machine: Emerald Max
Cores: 4
Abaqus Version: 6.14-3

Upload Files: 
  - 01_settings.inc
  - 02_material.inc
  - 03_seabed.inc
  - 04_cent_springs.inc
  - 05_interactions.inc
  - 06_model_definition.inc
  - 07_trawl.inc
  - job.inp
  - post_process.py
  - onefric_312.o

Command:
  - abaqus job=job user=onefric_312.o cpus=4 mp_mode=mpi double=both interactive
  - abaqus view noGUI=post_process.py
```
# Execute
Natigate to the working folder and include all the files that required to be sent to the rescale. Execute the program using

`pyrescale --run input.yml`
