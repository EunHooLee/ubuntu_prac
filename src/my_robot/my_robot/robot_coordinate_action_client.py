import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from tutorial_interfaces.action import RobotCoordinate


class RobotCoordinateActionClient(Node):

    def __init__(self):
        super().__init__('robot_coordinate_action_client')
        self._action_client = ActionClient(self,RobotCoordinate,'robot_coordinate')

    def send_goal_coordinate(self,x_order,y_order,z_order):
        goal_coordinate_msg = RobotCoordinate.Goal()
        goal_coordinate_msg.x_coordinate_order = x_order
        goal_coordinate_msg.y_coordinate_order = y_order
        goal_coordinate_msg.z_coordinate_order = z_order

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_coordinate_msg,feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callbcak)

    def goal_response_callbcak(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self,future):
        result = future.result().result
        self.get_logger().info('Result: {}'.format(result.rpm_result))
        rclpy.shutdown()
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Current RPM: {}'.format(feedback.rpm_feedback))


def main(args = None):
    x_coordinate = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0]
    y_coordinate = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0]
    z_coordinate = [0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0]
    
    rclpy.init(args=args)

    robot_coordinate_action_client = RobotCoordinateActionClient()

    future = robot_coordinate_action_client.send_goal_coordinate(x_coordinate,y_coordinate,z_coordinate)

    rclpy.spin(robot_coordinate_action_client)


if __name__ == "__main__":
    main()