#include <sweeper_camera/camera.h>

namespace sweeper {

    static Camera& Camera::getInstance(){
        static Camera camera;
        return camera;
    }

    Camera::Camera(): driver(UsbDriver::getInstance()) {

    }

    Camera::~Camera() {

    }
}