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
CMAKE_COMMAND = /cygdrive/c/Users/C22Jim.Wang/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/C22Jim.Wang/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/laob09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/laob09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laob09.dir/flags.make

CMakeFiles/laob09.dir/lab09main.c.o: CMakeFiles/laob09.dir/flags.make
CMakeFiles/laob09.dir/lab09main.c.o: ../lab09main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/laob09.dir/lab09main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/laob09.dir/lab09main.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09main.c

CMakeFiles/laob09.dir/lab09main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/laob09.dir/lab09main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09main.c > CMakeFiles/laob09.dir/lab09main.c.i

CMakeFiles/laob09.dir/lab09main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/laob09.dir/lab09main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09main.c -o CMakeFiles/laob09.dir/lab09main.c.s

CMakeFiles/laob09.dir/lab09functs.c.o: CMakeFiles/laob09.dir/flags.make
CMakeFiles/laob09.dir/lab09functs.c.o: ../lab09functs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/laob09.dir/lab09functs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/laob09.dir/lab09functs.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09functs.c

CMakeFiles/laob09.dir/lab09functs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/laob09.dir/lab09functs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09functs.c > CMakeFiles/laob09.dir/lab09functs.c.i

CMakeFiles/laob09.dir/lab09functs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/laob09.dir/lab09functs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/lab09functs.c -o CMakeFiles/laob09.dir/lab09functs.c.s

# Object files for target laob09
laob09_OBJECTS = \
"CMakeFiles/laob09.dir/lab09main.c.o" \
"CMakeFiles/laob09.dir/lab09functs.c.o"

# External object files for target laob09
laob09_EXTERNAL_OBJECTS =

laob09.exe: CMakeFiles/laob09.dir/lab09main.c.o
laob09.exe: CMakeFiles/laob09.dir/lab09functs.c.o
laob09.exe: CMakeFiles/laob09.dir/build.make
laob09.exe: CMakeFiles/laob09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable laob09.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/laob09.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laob09.dir/build: laob09.exe

.PHONY : CMakeFiles/laob09.dir/build

CMakeFiles/laob09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/laob09.dir/cmake_clean.cmake
.PHONY : CMakeFiles/laob09.dir/clean

CMakeFiles/laob09.dir/depend:
	cd /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab09/cmake-build-debug/CMakeFiles/laob09.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laob09.dir/depend
