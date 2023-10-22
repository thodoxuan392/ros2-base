#include <string>
#include <vector>

#ifndef SWEEP_CAMERA_USB_DRIVER_H
#define SWEEP_CAMERA_USB_DRIVER_H

namespace sweeper{
    class UsbDriver{
        public:
            static UsbDriver& getInstance();
        private:
            UsbDriver();
            ~UsbDriver();
            std::string deviceName;
    };
}

#endif // SWEEP_CAMERA_USB_DRIVER_H