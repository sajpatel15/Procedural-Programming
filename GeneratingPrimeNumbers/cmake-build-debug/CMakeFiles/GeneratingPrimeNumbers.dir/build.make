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
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/GeneratingPrimeNumbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeneratingPrimeNumbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeneratingPrimeNumbers.dir/flags.make

CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o: CMakeFiles/GeneratingPrimeNumbers.dir/flags.make
CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o   -c "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/main.c"

CMakeFiles/GeneratingPrimeNumbers.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GeneratingPrimeNumbers.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/main.c" > CMakeFiles/GeneratingPrimeNumbers.dir/main.c.i

CMakeFiles/GeneratingPrimeNumbers.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GeneratingPrimeNumbers.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/main.c" -o CMakeFiles/GeneratingPrimeNumbers.dir/main.c.s

# Object files for target GeneratingPrimeNumbers
GeneratingPrimeNumbers_OBJECTS = \
"CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o"

# External object files for target GeneratingPrimeNumbers
GeneratingPrimeNumbers_EXTERNAL_OBJECTS =

GeneratingPrimeNumbers.exe: CMakeFiles/GeneratingPrimeNumbers.dir/main.c.o
GeneratingPrimeNumbers.exe: CMakeFiles/GeneratingPrimeNumbers.dir/build.make
GeneratingPrimeNumbers.exe: CMakeFiles/GeneratingPrimeNumbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable GeneratingPrimeNumbers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GeneratingPrimeNumbers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeneratingPrimeNumbers.dir/build: GeneratingPrimeNumbers.exe

.PHONY : CMakeFiles/GeneratingPrimeNumbers.dir/build

CMakeFiles/GeneratingPrimeNumbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GeneratingPrimeNumbers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GeneratingPrimeNumbers.dir/clean

CMakeFiles/GeneratingPrimeNumbers.dir/depend:
	cd "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug" "/cygdrive/c/Users/Saj Patel/Desktop/procedual programming/GeneratingPrimeNumbers/cmake-build-debug/CMakeFiles/GeneratingPrimeNumbers.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GeneratingPrimeNumbers.dir/depend

