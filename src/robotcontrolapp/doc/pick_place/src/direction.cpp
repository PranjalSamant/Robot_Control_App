#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Pose.h>
#include <moveit/move_group_interface/move_group_interface.h>

// Global variables for storing MoveGroupInterface and NodeHandle pointers
moveit::planning_interface::MoveGroupInterface* group_ptr = nullptr;
ros::NodeHandle* nh_ptr = nullptr;

// Function to move the robot up by 10 cm
void moveUp() {
    geometry_msgs::Pose target_pose = group_ptr->getCurrentPose().pose;
    target_pose.position.z += 0.1; // Move up by 10 cm
    group_ptr->setPoseTarget(target_pose);
    group_ptr->move();
}

// Function to move the robot down by 10 cm
void moveDown() {
    geometry_msgs::Pose target_pose = group_ptr->getCurrentPose().pose;
    target_pose.position.z -= 0.1; // Move down by 10 cm
    group_ptr->setPoseTarget(target_pose);
    group_ptr->move();
}

// Function to move the robot left by 10 cm
void moveLeft() {
    geometry_msgs::Pose target_pose = group_ptr->getCurrentPose().pose;
    target_pose.position.y -= 0.1; // Move left by 10 cm
    group_ptr->setPoseTarget(target_pose);
    group_ptr->move();
}

// Function to move the robot right by 10 cm
void moveRight() {
    geometry_msgs::Pose target_pose = group_ptr->getCurrentPose().pose;
    target_pose.position.y += 0.1; // Move right by 10 cm
    group_ptr->setPoseTarget(target_pose);
    group_ptr->move();
}

// Callback function for processing commands
void helloCallback(const std_msgs::String::ConstPtr& msg) {
    std::string command = msg->data;
    if (command == "move_up") {
        moveUp();
    } else if (command == "move_down") {
        moveDown();
    } else if (command == "move_left") {
        moveLeft();
    } else if (command == "move_right") {
        moveRight();
    } else {
        ROS_WARN("Received unknown command: %s", command.c_str());
        return; // Ignore unknown commands
    }
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "panda_arm_movement_direction");
    ros::NodeHandle nh;

    moveit::planning_interface::MoveGroupInterface group("panda_arm");
    group.setPlanningTime(45.0);

    // Store pointers to MoveGroupInterface and NodeHandle
    group_ptr = &group;
    nh_ptr = &nh;

    // Subscribe to the /hello topic
    ros::Subscriber sub = nh.subscribe("/hello", 10, helloCallback);

    // Use a multi-threaded spinner
    ros::MultiThreadedSpinner spinner(2);
    spinner.spin(); // Start spinning

    return 0;
}

