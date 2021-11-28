import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from rclpy.action import ActionServer

from tutorial_interfaces.msg import IMU
from tutorial_interfaces.msg import Encoder
from tutorial_interfaces.action import RobotCoordinate

import time


class MotorControl(Node):

    def __init__(self):
        super().__init__('motor_control')
        self.imu_subscription = self.create_subscription(IMU,'imu',self.imu_listener_callback)
        self.encoder_subscription = self.create_subscription(Encoder,'encoder',self.encoder_listener_callback)

        self._action_server = ActionServer(self,RobotCoordinate,'robot_coordinate',self.executable_callback)

        self.imu_sensor = 0
        self.encoder_sensor = 0
        self.rpm = 0
        self.current_x_coordinate = 0
        self.current_y_coordinate = 0
        self.current_z_coordinate = 0

    def imu_listener_callback(self,imu_msg):
        self.imu_sensor = imu_msg.imu

    def encoder_listener_callback(self,encoder_msg):
        self.encoder_sensor = encoder_msg.encoder

    def executable_callback(self,goal_hadle):
        rpm_feedback_msg = RobotCoordinate.Feedback()

        for i in range(1,len(goal_hadle.request.x_coordinate_order)):
            rpm_feedback_msg.rpm_feedback = float(sum(self.imu_sensor) + self.encoder_sensor + \
                goal_hadle.request.x_coordinate_order[i]**2+\
                    goal_hadle.request.y_coordinate_order[i]**2+\
                        goal_hadle.request.z_coordinate_order[i]**2)
            goal_hadle.publish_feedback(rpm_feedback_msg)
            time.sleep(1)
        
        goal_hadle.succeed()

        result = RobotCoordinate.Result()
        result.rpm_result = rpm_feedback_msg.rpm_feedback
        return result
        

def main(args = None):
    rclpy.init(args=args)

    motor_control = MotorControl()

    rclpy.spin(motor_control)

    motor_control.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()