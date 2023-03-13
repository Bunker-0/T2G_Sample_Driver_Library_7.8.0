# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0

# Utility rule file for util_afu_oocd_erase_all.

# Include any custom commands dependencies for this target.
include CMakeFiles/util_afu_oocd_erase_all.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/util_afu_oocd_erase_all.dir/progress.make

CMakeFiles/util_afu_oocd_erase_all:
	"C:/Program Files (x86)/Infineon/Auto Flash Utility 1.4/bin/openocd.exe" -s C:/Program\ Files\ (x86)/Infineon/Auto\ Flash\ Utility\ 1.4/scripts -f interface/kitprog3.cfg -c transport\ select\ swd -f target/traveo2_8m_b0.cfg -c init;\ reset\ init;\ flash\ erase_sector\ 0\ 0\ last;\ shutdown

util_afu_oocd_erase_all: CMakeFiles/util_afu_oocd_erase_all
util_afu_oocd_erase_all: CMakeFiles/util_afu_oocd_erase_all.dir/build.make
.PHONY : util_afu_oocd_erase_all

# Rule to build all files generated by this target.
CMakeFiles/util_afu_oocd_erase_all.dir/build: util_afu_oocd_erase_all
.PHONY : CMakeFiles/util_afu_oocd_erase_all.dir/build

CMakeFiles/util_afu_oocd_erase_all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/util_afu_oocd_erase_all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/util_afu_oocd_erase_all.dir/clean

CMakeFiles/util_afu_oocd_erase_all.dir/depend:
	cd /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles/util_afu_oocd_erase_all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/util_afu_oocd_erase_all.dir/depend

