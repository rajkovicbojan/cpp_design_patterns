
#include "device_adapter.h"

device_adapter::device_adapter()
{
    std::cout<<"Constructor of device adapter\n";
};

device_adapter::~device_adapter()
{
};

void device_adapter::doSomething()  
{
    std::cout << "DEVICE ADAPTER IS CALLING OLD DEVICE\n" ;
    old_device::runOld();
};