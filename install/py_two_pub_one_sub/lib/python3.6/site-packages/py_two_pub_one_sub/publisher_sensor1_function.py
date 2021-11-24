import rclpy
from rclpy.node import Node

from tutorial_interfaces.msg import Num


class Sensor1Publisher(Node):

    def __init__(self):
        super().__init__('sensor1_publisher')
        self.publisher_ = self.create_publisher(Num,'topic1',10) 
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)
        self.i = 1

    def timer_callback(self):
        msg = Num()
        msg.num = self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: {}'.format(msg.num))
        # self.i +=1

def main(args = None):
    rclpy.init(args = args)

    sensor1_publisher = Sensor1Publisher()

    rclpy.spin(sensor1_publisher)

    sensor1_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()