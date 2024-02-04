#include "device.h"
#include <iostream>

 void device::doSomething()
{
    std::cout<<"My device "<<deviceField<<" do something\n";
};

device::device(int i):deviceField(i){};
device::device():deviceField(0){};
