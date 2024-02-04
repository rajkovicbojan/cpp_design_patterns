cmake_minimum_required(VERSION 3.1...3.28)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  ModernCMakeExample
  VERSION 1.0
  LANGUAGES CXX)

# If you set any CMAKE_ variables, that can go here.
# (But usually don't do this, except maybe for C++ standard)

# Find packages go here.

# You should usually split this into folders, but this is a simple example

# This is a "default" library, and will match the *** variable setting.
# Other common choices are STATIC, SHARED, and MODULE
# Including header files here helps IDEs but is not required.
# Output libname matches target name, with the usual extensions on your system
add_library(MyLibDevice device.cpp device.h)
add_library(MyLibOldDevice old_device.cpp old_device.h)
add_library(MyLibDeviceAdapter device_adapter.cpp device_adapter.h)

# Link each target with other targets or add options, etc.

# Adding something we can run - Output name matches target name
add_executable(MyExample main.cpp)

# Make sure you link your targets with this command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error.
target_link_libraries(MyExample PRIVATE MyLibDevice)
target_link_libraries(MyExample PRIVATE MyLibOldDevice)
target_link_libraries(MyExample PRIVATE MyLibDeviceAdapter)
target_link_libraries(MyLibDeviceAdapter PUBLIC MyLibOldDevice)
target_link_libraries(MyLibDevice PUBLIC MyLibOldDevice)