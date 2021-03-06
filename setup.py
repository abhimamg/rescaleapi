from setuptools import setup, find_packages

setup(
    name='pyrescale',
    description='A python API for managing projects on rescale',
    version='0.0.1',
    packages=find_packages(),
    include_package_data=True,
    install_requires=[
        'requests',
        'strictyaml',
        'click'    
    ],
    entry_points='''
        [console_scripts]
        pyrescale=pyrescale:main
       
    ''',
)