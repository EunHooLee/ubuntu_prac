import rclpy
from rclpy.node import Node

from tutorial_interfaces.msg import Num
from tutorial_interfaces.msg import TwoIntegersArray

# 센서1에서 상수를 센서2에서 배열로 데이터를 받은 뒤 그 값을 모두 더해 퍼블리시 하고있다.
# self.create_publisher() 와 self.create_subscriber() 내부에 2번째 토픽 이름은 받고 주는 노드끼리는 꼭 같야한다.
# xxx_callback(self,msg) 함수에서 msg 자리에는 뭐가 들어가도 상관없다. 그냥 받은 메세지가 들어가기 때문에 메세지 특징을 적어도 된다.
# 상수, 배열 등을 동시에 받을 때는 서로다른 메세지 타입 (ex. Num, TwoIntegersArray) 즉, 2개 이상의 subscriber를 쓰는게 좋다.

class ActuatorSubscriber(Node):

    def __init__(self):
        super().__init__('actuator_subscriber') 
        self.publisher_ = self.create_publisher(Num,'topic2',10)
        self.subscription = self.create_subscription(Num,'topic1',self.listener_callback,10)
        self.subscription2 = self.create_subscription(TwoIntegersArray,'topic',self.listener_callback2,10)
        self.subscription
        self.subscription2

        self.sensor1 = 0
        self.sensor2 = 0

        time_period = 0.5
        self.timer = self.create_timer(time_period,self.timer_callback)
        
    
    def listener_callback(self,msg):
        #self.get_logger().info('New Publishing: {}'.format(msg.num))
        self.sensor1 = msg.num
    
    def listener_callback2(self,msg1):
        #self.get_logger().info('Publishing: {}'.format(msg1.two_integers_array))
        self.sensor2 = sum(msg1.two_integers_array)

    def timer_callback(self):
        msg_ = Num()
        msg_.num = int(self.sensor1 + self.sensor2)
        self.publisher_.publish(msg_)
        self.get_logger().info("NEW PUBLISHING: {}".format(msg_.num))


    

        

def main(args = None):
    rclpy.init(args = args)

    actuator_subscriber = ActuatorSubscriber()

    rclpy.spin(actuator_subscriber)

    actuator_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()