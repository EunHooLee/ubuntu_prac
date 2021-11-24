import rclpy
from rclpy.node import Node

from tutorial_interfaces.msg import Num
from tutorial_interfaces.msg import TwoIntegersArray

class Sensor2Publisher(Node):

    def __init__(self):
        super().__init__('sensor2_publisher')
        self.publisher_ = self.create_publisher(TwoIntegersArray,'topic',10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period,self.timer_callback)
        self.i = 100
        self.j = 100
    
    def timer_callback(self):
        msg = TwoIntegersArray()
        msg.two_integers_array = [self.i, self.j]
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: {}'.format(msg.two_integers_array))
        # self.i +=10
        # self.j +=20
        # self.k +=30

def main(args = None):
    rclpy.init(args = args)

    sensor2_publisher = Sensor2Publisher()

    rclpy.spin(sensor2_publisher)

    sensor2_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()