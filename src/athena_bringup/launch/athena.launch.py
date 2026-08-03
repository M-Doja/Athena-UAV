from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription([

        Node(
            package='athena_core',
            executable='athena_manager',
            name='athena_manager',
            output='screen'
        ),

        Node(
            package='athena_health_manager',
            executable='health_manager',
            name='athena_health_manager',
            output='screen'
        ),

    ])
