import sys

from tutorial_interfaces.srv import JudgeSign
import rclpy
from rclpy.node import Node


class SignClientAsync(Node):

    def __init__(self):
        super().__init__('sign_client_async')
        self.cli = self.create_client(JudgeSign,'judge_sign')
        # Server를 기다리는 시간이 초과(timeout)됬을 경우 반복해라
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.req = JudgeSign.Request()

    def send_request(self):
        self.req.a = int(sys.argv[1])
        self.req.b = int(sys.argv[2])
        self.req.c = int(sys.argv[3])
        self.future = self.cli.call_async(self.req)

def main(args = None):
    rclpy.init(args = args)

    sign_client = SignClientAsync()
    sign_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(sign_client)
        if sign_client.future.done():
            try:
                response = sign_client.future.result()
            except Exception as e:
                sign_client.get_logger().info('Service call failed {}'.format(e))
            else:
                sign_client.get_logger().info('Result of sign_client: {} + {} + {} = {}, sign: {} '.format(
                    sign_client.req.a,sign_client.req.b,sign_client.req.c,response.sum,response.sign ))
            break
    sign_client.destroy_node()
    rclpy.shutdown()            

if __name__ == '__main__':
    main()