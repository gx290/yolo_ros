import os
from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    usb_cam_launch_file = '/opt/ros/humble/share/usb_cam/launch/camera.launch.py'

    return LaunchDescription([
        # Launch usb_cam using the provided launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(usb_cam_launch_file),
        ),

        # Launch yolov8 node
        Node(
            package='yolov8',
            executable='yolov8_node',
            name='yolov8_node',
            output='screen',
        ),
    ])

