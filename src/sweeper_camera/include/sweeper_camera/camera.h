#ifndef SWEEP_CAMERA_CAMERA_H
#define SWEEP_CAMERA_CAMERA_H

#include <sweeper_camera/usb_driver.h>

namespace sweeper {
    class Camera {
        public:
            static Camera& getInstance();
        private:    
            Camera();
            ~Camera();
            UsbDriver& driver;
    };
}

#endif // SWEEP_CAMERA_CAMERA_H