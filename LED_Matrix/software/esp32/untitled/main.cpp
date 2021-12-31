#include <iostream>
#include <windows.h>
#include "FUJIFILM.h"


int main() {
    FUJIFILM* camera;
    camera = new FUJIFILM();
    camera->init();
    camera->detect_usb();
    camera->openEx(0);
    camera->getDeviceInfo(NULL);
    camera->getLensInfo(NULL);
    camera->capPriorityMode(NULL);
    camera->capShutterSpeed(NULL);
//    camera->close(NULL);
//    camera->getVersionString();
//    camera->powerOff(NULL);
//    camera->exit();





    return 0;
}
