#include <sweeper_camera/usb_driver.h>

namespace sweeper {
        
    static UsbDriver& UsbDriver::getInstance(){
        static UsbDriver driver;
        return driver;
    }

    UsbDriver::UsbDriver(){

    }

    UsbDriver::~UsbDriver(){

    }
}