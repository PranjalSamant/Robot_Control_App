#include <thread>
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Pose.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/PlanningScene.h>
#include <chrono> // For timestamp
#include <iomanip> // For formatting timestamp

// Define constants for workspace dimensions
const double MAX_X = 0.6; // Half of the cube width (800 mm)
const double MIN_X = 0.2;
const double MAX_Y = 0.6; // Half of the cube length (800 mm)
const double MIN_Y = -0.6;
const double MAX_Z = 0.6; // Half of the cube height (800 mm)
const double MIN_Z = 0.025;

// Initial pose of the robot
geometry_msgs::Pose INITIAL_POSE = [](){
    geometry_msgs::Pose pose;
    pose.position.x = 0.3;
    pose.position.y = 0.0;
    pose.position.z = 0.53;
    pose.orientation.x = -3.141;
    pose.orientation.y = 0.0;
    pose.orientation.z = 0.0;
    pose.orientation.w = 0.0;
    return pose;
}();

// Global variables for storing MoveGroupInterface and NodeHandle pointers
moveit::planning_interface::MoveGroupInterface* group_ptr = nullptr;
ros::NodeHandle* nh_ptr = nullptr;

// Movement flags
bool moving_up = false;
bool moving_down = false;
bool moving_left = false;
bool moving_right = false;
bool moving_forward = false;
bool moving_backward = false;

void logTimestamp() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::cout << std::put_time(std::localtime(&now_c), "%H:%M:%S.") << std::setw(3) << std::setfill('0') << ms.count() << std::endl;
}


// Function to set robot speed based on command
void setRobotSpeed(const std::string& speed_command) {
    if (speed_command == "high") {
        group_ptr->setMaxVelocityScalingFactor(0.1);
    } else if (speed_command == "medium") {
        group_ptr->setMaxVelocityScalingFactor(0.05);
    } else if (speed_command == "slow") {
        group_ptr->setMaxVelocityScalingFactor(0.01);
    } else {
        ROS_WARN("Invalid speed command: %s", speed_command.c_str());
    }
}

// Function to move the robot up by 1 cm
void moveUp() {
    moving_up = true;
    logTimestamp();
}

// Function to move the robot down by 1 cm
void moveDown() {
    moving_down = true;
    logTimestamp();
}

// Function to move the robot left by 1 cm
void moveLeft() {
    moving_left = true;
    logTimestamp();
}

// Function to move the robot right by 1 cm
void moveRight() {
    moving_right = true;
    logTimestamp();
}

// Function to move the robot forward by 1 cm
void moveForward() {
    moving_forward = true;
    logTimestamp();
}

// Function to move the robot backward by 1 cm
void moveBackward() {
    moving_backward = true;
    logTimestamp();
}

// Function to stop the robot immediately
void stopRobot() {
    group_ptr->stop();
    moving_up = false;
    moving_down = false;
    moving_left = false;
    moving_right = false;
    moving_forward = false;
    moving_backward = false;
    logTimestamp();
}

// Function to reset the robot to its initial pose
void resetRobot() {
    group_ptr->setPoseTarget(INITIAL_POSE);
    group_ptr->move();
    logTimestamp();
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
    } else if (command == "move_forward") {
        moveForward();
    } else if (command == "move_backward") {
        moveBackward();
    } else if (command == "stop") {
        stopRobot();
    } else if (command == "reset") {
        resetRobot();
    } else if (command == "high" || command == "medium" || command == "slow") {
        setRobotSpeed(command);
    } else {
        ROS_WARN("Received unknown command: %s", command.c_str());
        return; // Ignore unknown commands
    }
}

// Function to continuously move the robot based on movement flags
void continuousMovement() {
    ros::Rate loop_rate(10); // Loop rate in Hz
    while (ros::ok()) {
        geometry_msgs::Pose target_pose = group_ptr->getCurrentPose().pose;
        if (moving_up && target_pose.position.z + 0.1 <= MAX_Z) {
            target_pose.position.z += 0.1; // Move up
        } else if (moving_down && target_pose.position.z - 0.1 >= MIN_Z) {
            target_pose.position.z -= 0.1; // Move down
        } else if (moving_left && target_pose.position.y - 0.1 >= MIN_Y) {
            target_pose.position.y -= 0.1; // Move left
        } else if (moving_right && target_pose.position.y + 0.1 <= MAX_Y) {
            target_pose.position.y += 0.1; // Move right
        } else if (moving_forward && target_pose.position.x + 0.1 <= MAX_X) {
            target_pose.position.x += 0.1; // Move forward
        } else if (moving_backward && target_pose.position.x - 0.1 >= MIN_X) {
            target_pose.position.x -= 0.1; // Move backward
        }
        group_ptr->setPoseTarget(target_pose);
        group_ptr->move(); // The move function uses default speed
        loop_rate.sleep();
    }
}



int main(int argc, char** argv) {
    ros::init(argc, argv, "panda_arm_movement_direction_c");
    ros::NodeHandle nh;

    moveit::planning_interface::MoveGroupInterface group("panda_arm");
    group.setPlanningTime(10.0);

    // Store pointers to MoveGroupInterface and NodeHandle
    group_ptr = &group;
    nh_ptr = &nh;

    // Subscribe to the /hello topic
    ros::Subscriber sub = nh.subscribe("/cmd", 10, helloCallback);

    // Start continuous movement thread
    std::thread continuous_movement_thread(continuousMovement);

    ros::spin(); // Start spinning
 
    // Join continuous movement thread
    continuous_movement_thread.join();

    return 0;
}

