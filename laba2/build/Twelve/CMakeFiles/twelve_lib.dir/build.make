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
CMAKE_SOURCE_DIR = /home/andrew/labs/ooplabs/oopLabs/laba2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrew/labs/ooplabs/oopLabs/laba2/build

# Include any dependencies generated for this target.
include Twelve/CMakeFiles/twelve_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Twelve/CMakeFiles/twelve_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include Twelve/CMakeFiles/twelve_lib.dir/progress.make

# Include the compile flags for this target's objects.
include Twelve/CMakeFiles/twelve_lib.dir/flags.make

Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o: Twelve/CMakeFiles/twelve_lib.dir/flags.make
Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o: ../Twelve/twelve.cpp
Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o: Twelve/CMakeFiles/twelve_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrew/labs/ooplabs/oopLabs/laba2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o"
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o -MF CMakeFiles/twelve_lib.dir/twelve.cpp.o.d -o CMakeFiles/twelve_lib.dir/twelve.cpp.o -c /home/andrew/labs/ooplabs/oopLabs/laba2/Twelve/twelve.cpp

Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twelve_lib.dir/twelve.cpp.i"
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrew/labs/ooplabs/oopLabs/laba2/Twelve/twelve.cpp > CMakeFiles/twelve_lib.dir/twelve.cpp.i

Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twelve_lib.dir/twelve.cpp.s"
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrew/labs/ooplabs/oopLabs/laba2/Twelve/twelve.cpp -o CMakeFiles/twelve_lib.dir/twelve.cpp.s

# Object files for target twelve_lib
twelve_lib_OBJECTS = \
"CMakeFiles/twelve_lib.dir/twelve.cpp.o"

# External object files for target twelve_lib
twelve_lib_EXTERNAL_OBJECTS =

Twelve/libtwelve_lib.a: Twelve/CMakeFiles/twelve_lib.dir/twelve.cpp.o
Twelve/libtwelve_lib.a: Twelve/CMakeFiles/twelve_lib.dir/build.make
Twelve/libtwelve_lib.a: Twelve/CMakeFiles/twelve_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrew/labs/ooplabs/oopLabs/laba2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtwelve_lib.a"
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && $(CMAKE_COMMAND) -P CMakeFiles/twelve_lib.dir/cmake_clean_target.cmake
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/twelve_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Twelve/CMakeFiles/twelve_lib.dir/build: Twelve/libtwelve_lib.a
.PHONY : Twelve/CMakeFiles/twelve_lib.dir/build

Twelve/CMakeFiles/twelve_lib.dir/clean:
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve && $(CMAKE_COMMAND) -P CMakeFiles/twelve_lib.dir/cmake_clean.cmake
.PHONY : Twelve/CMakeFiles/twelve_lib.dir/clean

Twelve/CMakeFiles/twelve_lib.dir/depend:
	cd /home/andrew/labs/ooplabs/oopLabs/laba2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrew/labs/ooplabs/oopLabs/laba2 /home/andrew/labs/ooplabs/oopLabs/laba2/Twelve /home/andrew/labs/ooplabs/oopLabs/laba2/build /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve /home/andrew/labs/ooplabs/oopLabs/laba2/build/Twelve/CMakeFiles/twelve_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Twelve/CMakeFiles/twelve_lib.dir/depend
