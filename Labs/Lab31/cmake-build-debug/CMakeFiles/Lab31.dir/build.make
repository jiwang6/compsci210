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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab31.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab31.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab31.dir/flags.make

CMakeFiles/Lab31.dir/main.c.o: CMakeFiles/Lab31.dir/flags.make
CMakeFiles/Lab31.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab31.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab31.dir/main.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/main.c

CMakeFiles/Lab31.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab31.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/main.c > CMakeFiles/Lab31.dir/main.c.i

CMakeFiles/Lab31.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab31.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/main.c -o CMakeFiles/Lab31.dir/main.c.s

# Object files for target Lab31
Lab31_OBJECTS = \
"CMakeFiles/Lab31.dir/main.c.o"

# External object files for target Lab31
Lab31_EXTERNAL_OBJECTS =

Lab31.exe: CMakeFiles/Lab31.dir/main.c.o
Lab31.exe: CMakeFiles/Lab31.dir/build.make
Lab31.exe: CMakeFiles/Lab31.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab31.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab31.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab31.dir/build: Lab31.exe

.PHONY : CMakeFiles/Lab31.dir/build

CMakeFiles/Lab31.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab31.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab31.dir/clean

CMakeFiles/Lab31.dir/depend:
	cd /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab31/cmake-build-debug/CMakeFiles/Lab31.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab31.dir/depend

