# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\juano\Exercism\cpp\last-will

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\juano\Exercism\cpp\last-will\build

# Utility rule file for test_last-will.

# Include any custom commands dependencies for this target.
include CMakeFiles/test_last-will.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_last-will.dir/progress.make

CMakeFiles/test_last-will: last-will.exe
	.\last-will.exe

test_last-will: CMakeFiles/test_last-will
test_last-will: CMakeFiles/test_last-will.dir/build.make
.PHONY : test_last-will

# Rule to build all files generated by this target.
CMakeFiles/test_last-will.dir/build: test_last-will
.PHONY : CMakeFiles/test_last-will.dir/build

CMakeFiles/test_last-will.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_last-will.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_last-will.dir/clean

CMakeFiles/test_last-will.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\juano\Exercism\cpp\last-will C:\Users\juano\Exercism\cpp\last-will C:\Users\juano\Exercism\cpp\last-will\build C:\Users\juano\Exercism\cpp\last-will\build C:\Users\juano\Exercism\cpp\last-will\build\CMakeFiles\test_last-will.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_last-will.dir/depend

