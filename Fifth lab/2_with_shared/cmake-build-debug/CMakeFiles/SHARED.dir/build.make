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
CMAKE_SOURCE_DIR = "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SHARED.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SHARED.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SHARED.dir/flags.make

CMakeFiles/SHARED.dir/library.cpp.o: CMakeFiles/SHARED.dir/flags.make
CMakeFiles/SHARED.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SHARED.dir/library.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SHARED.dir/library.cpp.o -c "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/library.cpp"

CMakeFiles/SHARED.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SHARED.dir/library.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/library.cpp" > CMakeFiles/SHARED.dir/library.cpp.i

CMakeFiles/SHARED.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SHARED.dir/library.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/library.cpp" -o CMakeFiles/SHARED.dir/library.cpp.s

# Object files for target SHARED
SHARED_OBJECTS = \
"CMakeFiles/SHARED.dir/library.cpp.o"

# External object files for target SHARED
SHARED_EXTERNAL_OBJECTS =

libSHARED.a: CMakeFiles/SHARED.dir/library.cpp.o
libSHARED.a: CMakeFiles/SHARED.dir/build.make
libSHARED.a: CMakeFiles/SHARED.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libSHARED.a"
	$(CMAKE_COMMAND) -P CMakeFiles/SHARED.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SHARED.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SHARED.dir/build: libSHARED.a
.PHONY : CMakeFiles/SHARED.dir/build

CMakeFiles/SHARED.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SHARED.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SHARED.dir/clean

CMakeFiles/SHARED.dir/depend:
	cd "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared" "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared" "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug" "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug" "/Users/andrejlogvinov/Desktop/Fifth lab/2_with_shared/cmake-build-debug/CMakeFiles/SHARED.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SHARED.dir/depend

