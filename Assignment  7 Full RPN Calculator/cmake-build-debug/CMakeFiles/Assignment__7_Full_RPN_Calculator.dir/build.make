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
CMAKE_COMMAND = "/cygdrive/c/Users/Saj Patel/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/Saj Patel/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/flags.make

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/flags.make
CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o   -c "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/main.c"

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/main.c" > CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.i

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/main.c" -o CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.s

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/flags.make
CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o: ../RPN_linked_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o   -c "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/RPN_linked_list.c"

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/RPN_linked_list.c" > CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.i

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/RPN_linked_list.c" -o CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.s

# Object files for target Assignment__7_Full_RPN_Calculator
Assignment__7_Full_RPN_Calculator_OBJECTS = \
"CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o" \
"CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o"

# External object files for target Assignment__7_Full_RPN_Calculator
Assignment__7_Full_RPN_Calculator_EXTERNAL_OBJECTS =

Assignment__7_Full_RPN_Calculator.exe: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/main.c.o
Assignment__7_Full_RPN_Calculator.exe: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/RPN_linked_list.c.o
Assignment__7_Full_RPN_Calculator.exe: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/build.make
Assignment__7_Full_RPN_Calculator.exe: CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Assignment__7_Full_RPN_Calculator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/build: Assignment__7_Full_RPN_Calculator.exe

.PHONY : CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/build

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/clean

CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/depend:
	cd "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/Assignment  7 Full RPN Calculator/cmake-build-debug/CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment__7_Full_RPN_Calculator.dir/depend

