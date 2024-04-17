#!/usr/bin/env python3

import rospy
from std_msgs.msg import String

def main():
    rospy.init_node('topic_host_node', anonymous=True)
    topic_name = '/cmd'  # Change this to your desired topic name
    pub = rospy.Publisher(topic_name, String, queue_size=10)
    rospy.loginfo("Hosting topic: %s", topic_name)
    
    # Keep the node running
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass

