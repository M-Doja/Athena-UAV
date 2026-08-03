from setuptools import find_packages
from setuptools import setup

setup(
    name='athena_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('athena_interfaces', 'athena_interfaces.*')),
)
