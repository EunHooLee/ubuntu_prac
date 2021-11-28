from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    imu_node = Node(
        package='my_robot',
        node_executable = 'imu'
    )

    encoder_node = Node(
        package='my_robot',
        node_executable= 'encoder',
    )

    ld.add_action(imu_node)
    ld.add_action(encoder_node)

    return ld