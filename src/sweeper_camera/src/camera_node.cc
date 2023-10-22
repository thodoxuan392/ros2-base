#include <sweeper_camera/camera_node.h>

namespace sweeper {
    CameraNode::CameraNode() : rclcpp::Node("SweeperCamera"), camera(Camera::getInstance()){
        
    }

    CameraNode::~CameraNode(){

    }
}