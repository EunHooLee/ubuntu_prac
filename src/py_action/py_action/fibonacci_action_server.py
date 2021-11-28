import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from tutorial_interfaces.action import Fibonacci


class FibonacciActionServer(Node):

    def __init__(self):
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(self,Fibonacci,'fibonacci',self.executable_callback)

    def executable_callback(self,goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0.0]

        for i in goal_handle.request.order:
            feedback_msg.partial_sequence.append(float(i))
            self.get_logger().info('Feedback: {}'.format(feedback_msg.partial_sequence))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)
        
        self.get_logger().info('>>> {}'.format(feedback_msg.partial_sequence))
        goal_handle.succeed()
        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result
        

def main(args = None):  
    rclpy.init(args = args)

    fibonacci_action_server = FibonacciActionServer()

    rclpy.spin(fibonacci_action_server)

if __name__ == '__main__':
    main()
