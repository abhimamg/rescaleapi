from setuptools import setup, find_packages

setup(
    name='pyrescale',
    version='0.0.1',
    packages=find_packages(),
    include_package_data=True,
    install_requires=[
    ],
    entry_points='''
        [console_scripts]
        pyrescale=fastfea.landing:main
        demo_dnv=fastfea.demo_script:dnv_check
        
    ''',
)