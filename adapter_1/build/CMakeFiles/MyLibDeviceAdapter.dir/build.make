# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bojan/Documents/cpp_design_patterns/adapter_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bojan/Documents/cpp_design_patterns/adapter_1/build

# Include any dependencies generated for this target.
include CMakeFiles/MyLibDeviceAdapter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyLibDeviceAdapter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyLibDeviceAdapter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyLibDeviceAdapter.dir/flags.make

CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o: CMakeFiles/MyLibDeviceAdapter.dir/flags.make
CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o: ../device_adapter.cpp
CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o: CMakeFiles/MyLibDeviceAdapter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bojan/Documents/cpp_design_patterns/adapter_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o -MF CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o.d -o CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o -c /home/bojan/Documents/cpp_design_patterns/adapter_1/device_adapter.cpp

CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bojan/Documents/cpp_design_patterns/adapter_1/device_adapter.cpp > CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.i

CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bojan/Documents/cpp_design_patterns/adapter_1/device_adapter.cpp -o CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.s

# Object files for target MyLibDeviceAdapter
MyLibDeviceAdapter_OBJECTS = \
"CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o"

# External object files for target MyLibDeviceAdapter
MyLibDeviceAdapter_EXTERNAL_OBJECTS =

libMyLibDeviceAdapter.a: CMakeFiles/MyLibDeviceAdapter.dir/device_adapter.cpp.o
libMyLibDeviceAdapter.a: CMakeFiles/MyLibDeviceAdapter.dir/build.make
libMyLibDeviceAdapter.a: CMakeFiles/MyLibDeviceAdapter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bojan/Documents/cpp_design_patterns/adapter_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyLibDeviceAdapter.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MyLibDeviceAdapter.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyLibDeviceAdapter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyLibDeviceAdapter.dir/build: libMyLibDeviceAdapter.a
.PHONY : CMakeFiles/MyLibDeviceAdapter.dir/build

CMakeFiles/MyLibDeviceAdapter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyLibDeviceAdapter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyLibDeviceAdapter.dir/clean

CMakeFiles/MyLibDeviceAdapter.dir/depend:
	cd /home/bojan/Documents/cpp_design_patterns/adapter_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bojan/Documents/cpp_design_patterns/adapter_1 /home/bojan/Documents/cpp_design_patterns/adapter_1 /home/bojan/Documents/cpp_design_patterns/adapter_1/build /home/bojan/Documents/cpp_design_patterns/adapter_1/build /home/bojan/Documents/cpp_design_patterns/adapter_1/build/CMakeFiles/MyLibDeviceAdapter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyLibDeviceAdapter.dir/depend

