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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab19.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab19.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab19.dir/flags.make

CMakeFiles/Lab19.dir/lab19main.c.o: CMakeFiles/Lab19.dir/flags.make
CMakeFiles/Lab19.dir/lab19main.c.o: ../lab19main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab19.dir/lab19main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab19.dir/lab19main.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19main.c

CMakeFiles/Lab19.dir/lab19main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab19.dir/lab19main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19main.c > CMakeFiles/Lab19.dir/lab19main.c.i

CMakeFiles/Lab19.dir/lab19main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab19.dir/lab19main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19main.c -o CMakeFiles/Lab19.dir/lab19main.c.s

CMakeFiles/Lab19.dir/lab19functs.c.o: CMakeFiles/Lab19.dir/flags.make
CMakeFiles/Lab19.dir/lab19functs.c.o: ../lab19functs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lab19.dir/lab19functs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab19.dir/lab19functs.c.o   -c /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19functs.c

CMakeFiles/Lab19.dir/lab19functs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab19.dir/lab19functs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19functs.c > CMakeFiles/Lab19.dir/lab19functs.c.i

CMakeFiles/Lab19.dir/lab19functs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab19.dir/lab19functs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/lab19functs.c -o CMakeFiles/Lab19.dir/lab19functs.c.s

# Object files for target Lab19
Lab19_OBJECTS = \
"CMakeFiles/Lab19.dir/lab19main.c.o" \
"CMakeFiles/Lab19.dir/lab19functs.c.o"

# External object files for target Lab19
Lab19_EXTERNAL_OBJECTS =

Lab19.exe: CMakeFiles/Lab19.dir/lab19main.c.o
Lab19.exe: CMakeFiles/Lab19.dir/lab19functs.c.o
Lab19.exe: CMakeFiles/Lab19.dir/build.make
Lab19.exe: CMakeFiles/Lab19.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Lab19.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab19.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab19.dir/build: Lab19.exe

.PHONY : CMakeFiles/Lab19.dir/build

CMakeFiles/Lab19.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab19.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab19.dir/clean

CMakeFiles/Lab19.dir/depend:
	cd /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19 /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug /cygdrive/c/Users/C22Jim.Wang/Documents/compsci210/Labs/Lab19/cmake-build-debug/CMakeFiles/Lab19.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab19.dir/depend

