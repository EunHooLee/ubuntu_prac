import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node

from tutorial_interfaces.msg import Encoder

import random


class EncoderPublisher(Node):
    
    def __init__(self):
        super().__init__('endcoder_publihser')
        self.publisher_ = self.create_publisher(Encoder,'encoder',10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)


    def timer_callback(self):
        encoder_msg = Encoder()
        encoder_sensor = random.randint(0,100)
        encoder_msg.encoder = encoder_sensor
        self.publisher_.publish(encoder_msg)


def main(args = None):
    rclpy.init(args = args)
    
    encoder_publisher = EncoderPublisher()

    rclpy.spin(encoder_publisher)

    encoder_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()