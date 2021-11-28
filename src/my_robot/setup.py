import os
from glob import glob
from setuptools import setup

package_name = 'my_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name), glob('launch/*.launch.py'))
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
            'imu = my_robot.IMU_publisher_function:main',
            'encoder = my_robot.encoder_publisher_function:main',
            'control = my_robot.motor_control_function:main',
            'coordinate = my_robot.robot_coordinate_action_client:main'
        ],
    },
)