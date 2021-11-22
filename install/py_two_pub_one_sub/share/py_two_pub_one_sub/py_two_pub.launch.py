from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    sensor1_node = Node(
        package='py_two_pub_one_sub',
        node_executable = 'sensor1'
    )

    sensor2_node = Node(
        package='py_two_pub_one_sub',
        node_executable= 'sensor2'
    )

    ld.add_action(sensor1_node)
    ld.add_action(sensor2_node)

    return ld