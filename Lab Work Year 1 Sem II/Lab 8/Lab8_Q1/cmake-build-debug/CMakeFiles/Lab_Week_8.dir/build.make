# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_Week_8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_Week_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_Week_8.dir/flags.make

CMakeFiles/Lab_Week_8.dir/main.c.obj: CMakeFiles/Lab_Week_8.dir/flags.make
CMakeFiles/Lab_Week_8.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab_Week_8.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Lab_Week_8.dir\main.c.obj   -c "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\main.c"

CMakeFiles/Lab_Week_8.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab_Week_8.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\main.c" > CMakeFiles\Lab_Week_8.dir\main.c.i

CMakeFiles/Lab_Week_8.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab_Week_8.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\main.c" -o CMakeFiles\Lab_Week_8.dir\main.c.s

CMakeFiles/Lab_Week_8.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Lab_Week_8.dir/main.c.obj.requires

CMakeFiles/Lab_Week_8.dir/main.c.obj.provides: CMakeFiles/Lab_Week_8.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Lab_Week_8.dir\build.make CMakeFiles/Lab_Week_8.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Lab_Week_8.dir/main.c.obj.provides

CMakeFiles/Lab_Week_8.dir/main.c.obj.provides.build: CMakeFiles/Lab_Week_8.dir/main.c.obj


# Object files for target Lab_Week_8
Lab_Week_8_OBJECTS = \
"CMakeFiles/Lab_Week_8.dir/main.c.obj"

# External object files for target Lab_Week_8
Lab_Week_8_EXTERNAL_OBJECTS =

Lab_Week_8.exe: CMakeFiles/Lab_Week_8.dir/main.c.obj
Lab_Week_8.exe: CMakeFiles/Lab_Week_8.dir/build.make
Lab_Week_8.exe: CMakeFiles/Lab_Week_8.dir/linklibs.rsp
Lab_Week_8.exe: CMakeFiles/Lab_Week_8.dir/objects1.rsp
Lab_Week_8.exe: CMakeFiles/Lab_Week_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab_Week_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab_Week_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_Week_8.dir/build: Lab_Week_8.exe

.PHONY : CMakeFiles/Lab_Week_8.dir/build

CMakeFiles/Lab_Week_8.dir/requires: CMakeFiles/Lab_Week_8.dir/main.c.obj.requires

.PHONY : CMakeFiles/Lab_Week_8.dir/requires

CMakeFiles/Lab_Week_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab_Week_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab_Week_8.dir/clean

CMakeFiles/Lab_Week_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1" "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1" "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug" "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug" "D:\DIT\DT228 Year 1\SEMESTER 2\Programming\Labs\Lab_Week_8\Lab8_Q1\cmake-build-debug\CMakeFiles\Lab_Week_8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_Week_8.dir/depend

