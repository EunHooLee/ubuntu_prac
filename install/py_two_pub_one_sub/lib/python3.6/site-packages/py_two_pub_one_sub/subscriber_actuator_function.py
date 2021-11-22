import rclpy
from rclpy.node import Node

#from tutorial_interfaces.msg import TwoIntegersArray
from tutorial_interfaces.msg import Num

class ActuatorSubscriber(Node):

    def __init__(self):
        super().__init__('actuator_subscriber')
        self.subscription = self.create_subscription(Num,'topic',self.listener_callback,10)
        self.subscription
    
    def listener_callback(self,msg):
        self.get_logger().info('I heard: {}'.format(msg.num))

def main(args = None):
    rclpy.init(args = args)

    actuator_subscriber = ActuatorSubscriber()

    rclpy.spin(actuator_subscriber)

    actuator_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()