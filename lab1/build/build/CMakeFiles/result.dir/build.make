# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\kumar\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\kumar\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kumar\oopLabs\build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kumar\oopLabs\build\build

# Include any dependencies generated for this target.
include CMakeFiles/result.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/result.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/result.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/result.dir/flags.make

CMakeFiles/result.dir/lab1.cpp.obj: CMakeFiles/result.dir/flags.make
CMakeFiles/result.dir/lab1.cpp.obj: C:/Users/kumar/oopLabs/build/lab1.cpp
CMakeFiles/result.dir/lab1.cpp.obj: CMakeFiles/result.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\kumar\oopLabs\build\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/result.dir/lab1.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/result.dir/lab1.cpp.obj -MF CMakeFiles\result.dir\lab1.cpp.obj.d -o CMakeFiles\result.dir\lab1.cpp.obj -c C:\Users\kumar\oopLabs\build\lab1.cpp

CMakeFiles/result.dir/lab1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/result.dir/lab1.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kumar\oopLabs\build\lab1.cpp > CMakeFiles\result.dir\lab1.cpp.i

CMakeFiles/result.dir/lab1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/result.dir/lab1.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kumar\oopLabs\build\lab1.cpp -o CMakeFiles\result.dir\lab1.cpp.s

# Object files for target result
result_OBJECTS = \
"CMakeFiles/result.dir/lab1.cpp.obj"

# External object files for target result
result_EXTERNAL_OBJECTS =

result.exe: CMakeFiles/result.dir/lab1.cpp.obj
result.exe: CMakeFiles/result.dir/build.make
result.exe: CMakeFiles/result.dir/linkLibs.rsp
result.exe: CMakeFiles/result.dir/objects1.rsp
result.exe: CMakeFiles/result.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\kumar\oopLabs\build\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable result.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\result.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/result.dir/build: result.exe
.PHONY : CMakeFiles/result.dir/build

CMakeFiles/result.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\result.dir\cmake_clean.cmake
.PHONY : CMakeFiles/result.dir/clean

CMakeFiles/result.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kumar\oopLabs\build C:\Users\kumar\oopLabs\build C:\Users\kumar\oopLabs\build\build C:\Users\kumar\oopLabs\build\build C:\Users\kumar\oopLabs\build\build\CMakeFiles\result.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/result.dir/depend

