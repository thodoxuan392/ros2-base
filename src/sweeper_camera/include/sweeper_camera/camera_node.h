#ifndef SWEEP_CAMERA_CAMERA_NODE_H
#define SWEEP_CAMERA_CAMERA_NODE_H

#include <rclcpp/rclcpp.hpp>

#include <sweeper_camera/camera.h>
#include <sweeper_camera/usb_driver.h>

namespace sweeper {

    class CameraNode : public rclcpp::Node {
    public:
        CameraNode();
        ~CameraNode();
    private:
        Camera& camera;
    };
}

#endif // SWEEP_CAMERA_CAMERA_NODE_H