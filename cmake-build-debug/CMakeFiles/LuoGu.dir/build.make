# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "E:\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\Desktop\LuoGu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LuoGu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LuoGu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LuoGu.dir/flags.make

CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.obj: CMakeFiles/LuoGu.dir/flags.make
CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.obj: ../LoopStructure/P1075.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LuoGu.dir\LoopStructure\P1075.cpp.obj -c C:\Users\Administrator\Desktop\LuoGu\LoopStructure\P1075.cpp

CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\Desktop\LuoGu\LoopStructure\P1075.cpp > CMakeFiles\LuoGu.dir\LoopStructure\P1075.cpp.i

CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\Desktop\LuoGu\LoopStructure\P1075.cpp -o CMakeFiles\LuoGu.dir\LoopStructure\P1075.cpp.s

# Object files for target LuoGu
LuoGu_OBJECTS = \
"CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.obj"

# External object files for target LuoGu
LuoGu_EXTERNAL_OBJECTS =

LuoGu.exe: CMakeFiles/LuoGu.dir/LoopStructure/P1075.cpp.obj
LuoGu.exe: CMakeFiles/LuoGu.dir/build.make
LuoGu.exe: CMakeFiles/LuoGu.dir/linklibs.rsp
LuoGu.exe: CMakeFiles/LuoGu.dir/objects1.rsp
LuoGu.exe: CMakeFiles/LuoGu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LuoGu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LuoGu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LuoGu.dir/build: LuoGu.exe

.PHONY : CMakeFiles/LuoGu.dir/build

CMakeFiles/LuoGu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LuoGu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LuoGu.dir/clean

CMakeFiles/LuoGu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Desktop\LuoGu C:\Users\Administrator\Desktop\LuoGu C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug C:\Users\Administrator\Desktop\LuoGu\cmake-build-debug\CMakeFiles\LuoGu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LuoGu.dir/depend

