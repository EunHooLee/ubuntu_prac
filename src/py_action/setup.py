from setuptools import setup

package_name = 'py_action'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'fibonacci_server = py_action.fibonacci_action_server:main',
            'fibonacci_client = py_action.fibonacci_action_client:main',
        ],
    },
)
