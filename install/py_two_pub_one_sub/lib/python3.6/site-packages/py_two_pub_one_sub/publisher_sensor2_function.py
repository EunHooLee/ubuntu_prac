import rclpy
from rclpy.node import Node

from tutorial_interfaces.msg import Num


class Sensor2Publisher(Node):

    def __init__(self):
        super().__init__('sensor2_publisher')
        self.publisher_ = self.create_publisher(Num,'topic',10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg_ = Num()
        msg_.num = self.i
        self.publisher_.publish(msg_)
        self.get_logger().info('Publishing: {}'.format(msg_.num))
        self.i +=100

def main(args = None):
    rclpy.init(args = args)

    sensor2_publisher = Sensor2Publisher()

    rclpy.spin(sensor2_publisher)

    sensor2_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()