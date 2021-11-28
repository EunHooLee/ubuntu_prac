import rclpy
from rclpy.node import Node

from tutorial_interfaces.msg import IMU

import random


class IMUPublisher(Node):

    def __init__(self):
        super().__init__('IMU_publisher')
        self.publisher_ = self.create_publisher(IMU,'imu',10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)
        

    def timer_callback(self):
        imu_msg = IMU()
        imu_sensor = [random.random(),random.random(),random.random()]
        imu_msg.imu = imu_sensor
        self.publisher_.publish(imu_msg)


def main(args = None):
    rclpy.init(args=args)

    imu_publisher = IMUPublisher()

    rclpy.spin(imu_publisher)

    imu_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()