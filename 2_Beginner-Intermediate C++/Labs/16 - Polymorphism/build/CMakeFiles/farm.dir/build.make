# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build"

# Include any dependencies generated for this target.
include CMakeFiles/farm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/farm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/farm.dir/flags.make

CMakeFiles/farm.dir/src/main.cpp.o: CMakeFiles/farm.dir/flags.make
CMakeFiles/farm.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/farm.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/farm.dir/src/main.cpp.o -c "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/main.cpp"

CMakeFiles/farm.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/farm.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/main.cpp" > CMakeFiles/farm.dir/src/main.cpp.i

CMakeFiles/farm.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/farm.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/main.cpp" -o CMakeFiles/farm.dir/src/main.cpp.s

CMakeFiles/farm.dir/src/farm.cpp.o: CMakeFiles/farm.dir/flags.make
CMakeFiles/farm.dir/src/farm.cpp.o: ../src/farm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/farm.dir/src/farm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/farm.dir/src/farm.cpp.o -c "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/farm.cpp"

CMakeFiles/farm.dir/src/farm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/farm.dir/src/farm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/farm.cpp" > CMakeFiles/farm.dir/src/farm.cpp.i

CMakeFiles/farm.dir/src/farm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/farm.dir/src/farm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/src/farm.cpp" -o CMakeFiles/farm.dir/src/farm.cpp.s

# Object files for target farm
farm_OBJECTS = \
"CMakeFiles/farm.dir/src/main.cpp.o" \
"CMakeFiles/farm.dir/src/farm.cpp.o"

# External object files for target farm
farm_EXTERNAL_OBJECTS =

../bin/farm: CMakeFiles/farm.dir/src/main.cpp.o
../bin/farm: CMakeFiles/farm.dir/src/farm.cpp.o
../bin/farm: CMakeFiles/farm.dir/build.make
../bin/farm: CMakeFiles/farm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/farm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/farm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/farm.dir/build: ../bin/farm

.PHONY : CMakeFiles/farm.dir/build

CMakeFiles/farm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/farm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/farm.dir/clean

CMakeFiles/farm.dir/depend:
	cd "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/16 - Polymorphism/build/CMakeFiles/farm.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/farm.dir/depend
