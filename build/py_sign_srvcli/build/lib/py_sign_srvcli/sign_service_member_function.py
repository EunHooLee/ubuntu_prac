from tutorial_interfaces.srv import JudgeSign

import rclpy
from rclpy.node import Node


class SignService(Node):

    def __init__(self):
        super().__init__('sign_service')
        self.srv = self.create_service(JudgeSign,'judge_sign',self.judge_sign_callback)

    def judge_sign_callback(self,request,response):
        response.sum = request.a + request.b + request.c
        if response.sum >= 0:
            response.sign = True
        else:
            response.sign = False

        self.get_logger().info('Incoming request\n a: {}, b: {}, c: {}'.format(request.a,request.b,request.c))

        return response

def main(args = None):
    rclpy.init(args = args)

    sign_service = SignService()

    rclpy.spin(sign_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()