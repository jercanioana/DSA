# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ioanajercan/CLionProjects/DSALab6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DSALab6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DSALab6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DSALab6.dir/flags.make

CMakeFiles/DSALab6.dir/main.cpp.o: CMakeFiles/DSALab6.dir/flags.make
CMakeFiles/DSALab6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DSALab6.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSALab6.dir/main.cpp.o -c /Users/ioanajercan/CLionProjects/DSALab6/main.cpp

CMakeFiles/DSALab6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSALab6.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioanajercan/CLionProjects/DSALab6/main.cpp > CMakeFiles/DSALab6.dir/main.cpp.i

CMakeFiles/DSALab6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSALab6.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioanajercan/CLionProjects/DSALab6/main.cpp -o CMakeFiles/DSALab6.dir/main.cpp.s

CMakeFiles/DSALab6.dir/Matrix.cpp.o: CMakeFiles/DSALab6.dir/flags.make
CMakeFiles/DSALab6.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DSALab6.dir/Matrix.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DSALab6.dir/Matrix.cpp.o -c /Users/ioanajercan/CLionProjects/DSALab6/Matrix.cpp

CMakeFiles/DSALab6.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DSALab6.dir/Matrix.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioanajercan/CLionProjects/DSALab6/Matrix.cpp > CMakeFiles/DSALab6.dir/Matrix.cpp.i

CMakeFiles/DSALab6.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DSALab6.dir/Matrix.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioanajercan/CLionProjects/DSALab6/Matrix.cpp -o CMakeFiles/DSALab6.dir/Matrix.cpp.s

# Object files for target DSALab6
DSALab6_OBJECTS = \
"CMakeFiles/DSALab6.dir/main.cpp.o" \
"CMakeFiles/DSALab6.dir/Matrix.cpp.o"

# External object files for target DSALab6
DSALab6_EXTERNAL_OBJECTS =

DSALab6: CMakeFiles/DSALab6.dir/main.cpp.o
DSALab6: CMakeFiles/DSALab6.dir/Matrix.cpp.o
DSALab6: CMakeFiles/DSALab6.dir/build.make
DSALab6: CMakeFiles/DSALab6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable DSALab6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DSALab6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DSALab6.dir/build: DSALab6

.PHONY : CMakeFiles/DSALab6.dir/build

CMakeFiles/DSALab6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DSALab6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DSALab6.dir/clean

CMakeFiles/DSALab6.dir/depend:
	cd /Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ioanajercan/CLionProjects/DSALab6 /Users/ioanajercan/CLionProjects/DSALab6 /Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug /Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug /Users/ioanajercan/CLionProjects/DSALab6/cmake-build-debug/CMakeFiles/DSALab6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DSALab6.dir/depend

