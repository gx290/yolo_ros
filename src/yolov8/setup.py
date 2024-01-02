from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'yolov8'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name, 'msg'), glob(os.path.join('msg', '*.*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='guoxuan',
    maintainer_email='guoxuan@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'yolov8_node = yolov8.yolov8_node:main'
        ],
    },
)
