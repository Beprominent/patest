# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/xie/下载/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/xie/下载/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xie/CLionProjects/sort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xie/CLionProjects/sort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/selectsort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/selectsort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/selectsort.dir/flags.make

CMakeFiles/selectsort.dir/selectsort.cpp.o: CMakeFiles/selectsort.dir/flags.make
CMakeFiles/selectsort.dir/selectsort.cpp.o: ../selectsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xie/CLionProjects/sort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/selectsort.dir/selectsort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/selectsort.dir/selectsort.cpp.o -c /home/xie/CLionProjects/sort/selectsort.cpp

CMakeFiles/selectsort.dir/selectsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/selectsort.dir/selectsort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xie/CLionProjects/sort/selectsort.cpp > CMakeFiles/selectsort.dir/selectsort.cpp.i

CMakeFiles/selectsort.dir/selectsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/selectsort.dir/selectsort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xie/CLionProjects/sort/selectsort.cpp -o CMakeFiles/selectsort.dir/selectsort.cpp.s

CMakeFiles/selectsort.dir/selectsort.cpp.o.requires:

.PHONY : CMakeFiles/selectsort.dir/selectsort.cpp.o.requires

CMakeFiles/selectsort.dir/selectsort.cpp.o.provides: CMakeFiles/selectsort.dir/selectsort.cpp.o.requires
	$(MAKE) -f CMakeFiles/selectsort.dir/build.make CMakeFiles/selectsort.dir/selectsort.cpp.o.provides.build
.PHONY : CMakeFiles/selectsort.dir/selectsort.cpp.o.provides

CMakeFiles/selectsort.dir/selectsort.cpp.o.provides.build: CMakeFiles/selectsort.dir/selectsort.cpp.o


# Object files for target selectsort
selectsort_OBJECTS = \
"CMakeFiles/selectsort.dir/selectsort.cpp.o"

# External object files for target selectsort
selectsort_EXTERNAL_OBJECTS =

selectsort: CMakeFiles/selectsort.dir/selectsort.cpp.o
selectsort: CMakeFiles/selectsort.dir/build.make
selectsort: CMakeFiles/selectsort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xie/CLionProjects/sort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable selectsort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/selectsort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/selectsort.dir/build: selectsort

.PHONY : CMakeFiles/selectsort.dir/build

CMakeFiles/selectsort.dir/requires: CMakeFiles/selectsort.dir/selectsort.cpp.o.requires

.PHONY : CMakeFiles/selectsort.dir/requires

CMakeFiles/selectsort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/selectsort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/selectsort.dir/clean

CMakeFiles/selectsort.dir/depend:
	cd /home/xie/CLionProjects/sort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xie/CLionProjects/sort /home/xie/CLionProjects/sort /home/xie/CLionProjects/sort/cmake-build-debug /home/xie/CLionProjects/sort/cmake-build-debug /home/xie/CLionProjects/sort/cmake-build-debug/CMakeFiles/selectsort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/selectsort.dir/depend
