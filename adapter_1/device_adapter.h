#ifndef DEVICE_ADAPTER_H
#define DEVICE_ADAPTER_H

#include <iostream>
#include "device.h"
#include "old_device.h"

class device_adapter:public device , public old_device
{
private:
    /* data */
public:
    device_adapter();
    ~device_adapter();
    void doSomething() override;
    void runOld();
    
};





#endif