# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/v_user/tmp/tmp.vkNnzNWbj8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gnl_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gnl_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gnl_test.dir/flags.make

CMakeFiles/gnl_test.dir/get_next_line.c.o: CMakeFiles/gnl_test.dir/flags.make
CMakeFiles/gnl_test.dir/get_next_line.c.o: ../get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/gnl_test.dir/get_next_line.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gnl_test.dir/get_next_line.c.o   -c /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line.c

CMakeFiles/gnl_test.dir/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gnl_test.dir/get_next_line.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line.c > CMakeFiles/gnl_test.dir/get_next_line.c.i

CMakeFiles/gnl_test.dir/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gnl_test.dir/get_next_line.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line.c -o CMakeFiles/gnl_test.dir/get_next_line.c.s

CMakeFiles/gnl_test.dir/get_next_line_utils.c.o: CMakeFiles/gnl_test.dir/flags.make
CMakeFiles/gnl_test.dir/get_next_line_utils.c.o: ../get_next_line_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/gnl_test.dir/get_next_line_utils.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gnl_test.dir/get_next_line_utils.c.o   -c /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line_utils.c

CMakeFiles/gnl_test.dir/get_next_line_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gnl_test.dir/get_next_line_utils.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line_utils.c > CMakeFiles/gnl_test.dir/get_next_line_utils.c.i

CMakeFiles/gnl_test.dir/get_next_line_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gnl_test.dir/get_next_line_utils.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/v_user/tmp/tmp.vkNnzNWbj8/get_next_line_utils.c -o CMakeFiles/gnl_test.dir/get_next_line_utils.c.s

# Object files for target gnl_test
gnl_test_OBJECTS = \
"CMakeFiles/gnl_test.dir/get_next_line.c.o" \
"CMakeFiles/gnl_test.dir/get_next_line_utils.c.o"

# External object files for target gnl_test
gnl_test_EXTERNAL_OBJECTS =

gnl_test: CMakeFiles/gnl_test.dir/get_next_line.c.o
gnl_test: CMakeFiles/gnl_test.dir/get_next_line_utils.c.o
gnl_test: CMakeFiles/gnl_test.dir/build.make
gnl_test: CMakeFiles/gnl_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable gnl_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gnl_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gnl_test.dir/build: gnl_test

.PHONY : CMakeFiles/gnl_test.dir/build

CMakeFiles/gnl_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gnl_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gnl_test.dir/clean

CMakeFiles/gnl_test.dir/depend:
	cd /home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/v_user/tmp/tmp.vkNnzNWbj8 /home/v_user/tmp/tmp.vkNnzNWbj8 /home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug /home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug /home/v_user/tmp/tmp.vkNnzNWbj8/cmake-build-debug/CMakeFiles/gnl_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gnl_test.dir/depend

