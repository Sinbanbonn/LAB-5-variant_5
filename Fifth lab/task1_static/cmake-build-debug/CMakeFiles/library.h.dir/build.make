# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/library.h.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/library.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/library.h.dir/flags.make

CMakeFiles/library.h.dir/library.cpp.o: CMakeFiles/library.h.dir/flags.make
CMakeFiles/library.h.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/library.h.dir/library.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/library.h.dir/library.cpp.o -c "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/library.cpp"

CMakeFiles/library.h.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/library.h.dir/library.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/library.cpp" > CMakeFiles/library.h.dir/library.cpp.i

CMakeFiles/library.h.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/library.h.dir/library.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/library.cpp" -o CMakeFiles/library.h.dir/library.cpp.s

# Object files for target library.h
library_h_OBJECTS = \
"CMakeFiles/library.h.dir/library.cpp.o"

# External object files for target library.h
library_h_EXTERNAL_OBJECTS =

liblibrary.h.a: CMakeFiles/library.h.dir/library.cpp.o
liblibrary.h.a: CMakeFiles/library.h.dir/build.make
liblibrary.h.a: CMakeFiles/library.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibrary.h.a"
	$(CMAKE_COMMAND) -P CMakeFiles/library.h.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/library.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/library.h.dir/build: liblibrary.h.a
.PHONY : CMakeFiles/library.h.dir/build

CMakeFiles/library.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/library.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/library.h.dir/clean

CMakeFiles/library.h.dir/depend:
	cd "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static" "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static" "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug" "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug" "/Users/andrejlogvinov/Desktop/Fifth lab/task1_static/cmake-build-debug/CMakeFiles/library.h.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/library.h.dir/depend
