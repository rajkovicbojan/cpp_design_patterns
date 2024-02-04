#include<iostream>
#include "device.h"
#include "device_adapter.h"
#include "old_device.h"

using namespace std;

int main() {
device *deviceArray[3];

deviceArray[0] = new device(6);
deviceArray[1] = new device();
deviceArray[2] = new device_adapter();

for(int i=0; i<3; i++)
{
    deviceArray[i]->doSomething();
}

};