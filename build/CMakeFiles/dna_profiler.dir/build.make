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
CMAKE_SOURCE_DIR = /home/vitor/trabalho-3-2-dna-profiler-Anchel17

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vitor/trabalho-3-2-dna-profiler-Anchel17/build

# Include any dependencies generated for this target.
include CMakeFiles/dna_profiler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dna_profiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dna_profiler.dir/flags.make

CMakeFiles/dna_profiler.dir/src/main.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dna_profiler.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/main.cpp.o -c /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/main.cpp

CMakeFiles/dna_profiler.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/main.cpp > CMakeFiles/dna_profiler.dir/src/main.cpp.i

CMakeFiles/dna_profiler.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/main.cpp -o CMakeFiles/dna_profiler.dir/src/main.cpp.s

CMakeFiles/dna_profiler.dir/src/interface.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/interface.cpp.o: ../src/interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dna_profiler.dir/src/interface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/interface.cpp.o -c /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/interface.cpp

CMakeFiles/dna_profiler.dir/src/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/interface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/interface.cpp > CMakeFiles/dna_profiler.dir/src/interface.cpp.i

CMakeFiles/dna_profiler.dir/src/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/interface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/interface.cpp -o CMakeFiles/dna_profiler.dir/src/interface.cpp.s

CMakeFiles/dna_profiler.dir/src/database.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/database.cpp.o: ../src/database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/dna_profiler.dir/src/database.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/database.cpp.o -c /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/database.cpp

CMakeFiles/dna_profiler.dir/src/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/database.cpp > CMakeFiles/dna_profiler.dir/src/database.cpp.i

CMakeFiles/dna_profiler.dir/src/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/database.cpp -o CMakeFiles/dna_profiler.dir/src/database.cpp.s

CMakeFiles/dna_profiler.dir/src/dna.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/dna.cpp.o: ../src/dna.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/dna_profiler.dir/src/dna.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/dna.cpp.o -c /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/dna.cpp

CMakeFiles/dna_profiler.dir/src/dna.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/dna.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/dna.cpp > CMakeFiles/dna_profiler.dir/src/dna.cpp.i

CMakeFiles/dna_profiler.dir/src/dna.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/dna.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vitor/trabalho-3-2-dna-profiler-Anchel17/src/dna.cpp -o CMakeFiles/dna_profiler.dir/src/dna.cpp.s

# Object files for target dna_profiler
dna_profiler_OBJECTS = \
"CMakeFiles/dna_profiler.dir/src/main.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/interface.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/database.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/dna.cpp.o"

# External object files for target dna_profiler
dna_profiler_EXTERNAL_OBJECTS =

dna_profiler: CMakeFiles/dna_profiler.dir/src/main.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/interface.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/database.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/dna.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/build.make
dna_profiler: CMakeFiles/dna_profiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable dna_profiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dna_profiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dna_profiler.dir/build: dna_profiler

.PHONY : CMakeFiles/dna_profiler.dir/build

CMakeFiles/dna_profiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dna_profiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dna_profiler.dir/clean

CMakeFiles/dna_profiler.dir/depend:
	cd /home/vitor/trabalho-3-2-dna-profiler-Anchel17/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vitor/trabalho-3-2-dna-profiler-Anchel17 /home/vitor/trabalho-3-2-dna-profiler-Anchel17 /home/vitor/trabalho-3-2-dna-profiler-Anchel17/build /home/vitor/trabalho-3-2-dna-profiler-Anchel17/build /home/vitor/trabalho-3-2-dna-profiler-Anchel17/build/CMakeFiles/dna_profiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dna_profiler.dir/depend

