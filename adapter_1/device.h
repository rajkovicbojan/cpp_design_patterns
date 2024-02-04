#ifndef DEVICE_H
#define DEVICE_H

class device
{
    public:
        virtual void doSomething();
        device(int);
        device();
    private:
        int deviceField;
};

#endif