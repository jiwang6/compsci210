# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/C22Jim.Wang/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/C22Jim.Wang/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab30.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab30.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab30.dir/flags.make

CMakeFiles/Lab30.dir/lab30.c.o: CMakeFiles/Lab30.dir/flags.make
CMakeFiles/Lab30.dir/lab30.c.o: ../lab30.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab30.dir/lab30.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab30.dir/lab30.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/lab30.c

CMakeFiles/Lab30.dir/lab30.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab30.dir/lab30.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/lab30.c > CMakeFiles/Lab30.dir/lab30.c.i

CMakeFiles/Lab30.dir/lab30.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab30.dir/lab30.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/lab30.c -o CMakeFiles/Lab30.dir/lab30.c.s

# Object files for target Lab30
Lab30_OBJECTS = \
"CMakeFiles/Lab30.dir/lab30.c.o"

# External object files for target Lab30
Lab30_EXTERNAL_OBJECTS =

Lab30.exe: CMakeFiles/Lab30.dir/lab30.c.o
Lab30.exe: CMakeFiles/Lab30.dir/build.make
Lab30.exe: CMakeFiles/Lab30.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab30.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab30.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab30.dir/build: Lab30.exe

.PHONY : CMakeFiles/Lab30.dir/build

CMakeFiles/Lab30.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab30.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab30.dir/clean

CMakeFiles/Lab30.dir/depend:
	cd /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab30/cmake-build-debug/CMakeFiles/Lab30.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab30.dir/depend

