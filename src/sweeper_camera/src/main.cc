#include <iostream>
#include <chrono>
#include <thread>

#include "rclcpp/rclcpp.hpp"

#include "sweeper_camera/camera_node.h"
#include "sweeper_camera/camera.h"
#include "sweeper_camera/usb_driver.h"

int main(int argc, char *argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<sweeper::CameraNode>());
    rclcpp::shutdown();
}