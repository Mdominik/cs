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
CMAKE_SOURCE_DIR = "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list"

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/src/main.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/src/main.cpp.o -c "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/main.cpp"

CMakeFiles/hello.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/main.cpp" > CMakeFiles/hello.dir/src/main.cpp.i

CMakeFiles/hello.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/main.cpp" -o CMakeFiles/hello.dir/src/main.cpp.s

CMakeFiles/hello.dir/src/people.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/src/people.cpp.o: src/people.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello.dir/src/people.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/src/people.cpp.o -c "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/people.cpp"

CMakeFiles/hello.dir/src/people.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/src/people.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/people.cpp" > CMakeFiles/hello.dir/src/people.cpp.i

CMakeFiles/hello.dir/src/people.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/src/people.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/src/people.cpp" -o CMakeFiles/hello.dir/src/people.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/src/main.cpp.o" \
"CMakeFiles/hello.dir/src/people.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

bin/hello: CMakeFiles/hello.dir/src/main.cpp.o
bin/hello: CMakeFiles/hello.dir/src/people.cpp.o
bin/hello: CMakeFiles/hello.dir/build.make
bin/hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bin/hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: bin/hello

.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list" "/home/dominik/projects/study/2_Beginner-Intermediate C++/Labs/11 - Ordered linked list/CMakeFiles/hello.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend

