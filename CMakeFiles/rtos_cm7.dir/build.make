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

# Include any dependencies generated for this target.
include CMakeFiles/rtos_cm7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rtos_cm7.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rtos_cm7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rtos_cm7.dir/flags.make

CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o: common/src/rtos/croutine.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/croutine.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/croutine.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/croutine.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o: common/src/rtos/event_groups.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/event_groups.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/event_groups.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/event_groups.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o: common/src/rtos/list.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/list.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/list.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/list.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o: common/src/rtos/queue.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/queue.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/queue.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/queue.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o: common/src/rtos/stream_buffer.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/stream_buffer.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/stream_buffer.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/stream_buffer.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o: common/src/rtos/tasks.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/tasks.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/tasks.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/tasks.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o: common/src/rtos/timers.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/timers.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/timers.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/timers.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o: common/src/rtos/portable/MemMang/heap_4.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/MemMang/heap_4.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/MemMang/heap_4.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/MemMang/heap_4.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.s

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o: CMakeFiles/rtos_cm7.dir/flags.make
CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o: common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c
CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o: CMakeFiles/rtos_cm7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o -MF CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o.d -o CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o -c /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c > CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.i

CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c -o CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.s

# Object files for target rtos_cm7
rtos_cm7_OBJECTS = \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o" \
"CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o"

# External object files for target rtos_cm7
rtos_cm7_EXTERNAL_OBJECTS =

librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/croutine.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/event_groups.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/list.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/queue.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/stream_buffer.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/tasks.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/timers.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/MemMang/heap_4.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/common/src/rtos/portable/GCC/ARM_CM7/r0p1/port.c.o
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/build.make
librtos_cm7.a: CMakeFiles/rtos_cm7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C static library librtos_cm7.a"
	$(CMAKE_COMMAND) -P CMakeFiles/rtos_cm7.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rtos_cm7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rtos_cm7.dir/build: librtos_cm7.a
.PHONY : CMakeFiles/rtos_cm7.dir/build

CMakeFiles/rtos_cm7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rtos_cm7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rtos_cm7.dir/clean

CMakeFiles/rtos_cm7.dir/depend:
	cd /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0 /home/cartographer/CMAKE/T2G_Sample_Driver_Library_7.8.0/CMakeFiles/rtos_cm7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rtos_cm7.dir/depend

