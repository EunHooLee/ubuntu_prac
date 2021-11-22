import os
from glob import glob
from setuptools import setup

package_name = 'py_two_pub_one_sub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name),glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leh',
    maintainer_email='eunhoolee@icloud.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sensor1 = py_two_pub_one_sub.publisher_sensor1_function:main',
            'sensor2 = py_two_pub_one_sub.publisher_sensor2_function:main',
            'actuator = py_two_pub_one_sub.subscriber_actuator_function:main',
        ],
    },
)
