# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\QT\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = D:\QT\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++\RESTAPI_Server\RESTAPI_SERVER

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++\RESTAPI_Server\RESTAPI_SERVER\build\Desktop_Qt_6_8_2_MinGW_64_bit-Debug

# Utility rule file for RESTAPI_SERVER_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/RESTAPI_SERVER_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RESTAPI_SERVER_autogen.dir/progress.make

CMakeFiles/RESTAPI_SERVER_autogen: RESTAPI_SERVER_autogen/timestamp

RESTAPI_SERVER_autogen/timestamp: D:/QT/6.8.2/mingw_64/bin/moc.exe
RESTAPI_SERVER_autogen/timestamp: CMakeFiles/RESTAPI_SERVER_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\C++\RESTAPI_Server\RESTAPI_SERVER\build\Desktop_Qt_6_8_2_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target RESTAPI_SERVER"
	D:\QT\Tools\CMake_64\bin\cmake.exe -E cmake_autogen D:/C++/RESTAPI_Server/RESTAPI_SERVER/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/CMakeFiles/RESTAPI_SERVER_autogen.dir/AutogenInfo.json Debug
	D:\QT\Tools\CMake_64\bin\cmake.exe -E touch D:/C++/RESTAPI_Server/RESTAPI_SERVER/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/RESTAPI_SERVER_autogen/timestamp

RESTAPI_SERVER_autogen: CMakeFiles/RESTAPI_SERVER_autogen
RESTAPI_SERVER_autogen: RESTAPI_SERVER_autogen/timestamp
RESTAPI_SERVER_autogen: CMakeFiles/RESTAPI_SERVER_autogen.dir/build.make
.PHONY : RESTAPI_SERVER_autogen

# Rule to build all files generated by this target.
CMakeFiles/RESTAPI_SERVER_autogen.dir/build: RESTAPI_SERVER_autogen
.PHONY : CMakeFiles/RESTAPI_SERVER_autogen.dir/build

CMakeFiles/RESTAPI_SERVER_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RESTAPI_SERVER_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RESTAPI_SERVER_autogen.dir/clean

CMakeFiles/RESTAPI_SERVER_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++\RESTAPI_Server\RESTAPI_SERVER D:\C++\RESTAPI_Server\RESTAPI_SERVER D:\C++\RESTAPI_Server\RESTAPI_SERVER\build\Desktop_Qt_6_8_2_MinGW_64_bit-Debug D:\C++\RESTAPI_Server\RESTAPI_SERVER\build\Desktop_Qt_6_8_2_MinGW_64_bit-Debug D:\C++\RESTAPI_Server\RESTAPI_SERVER\build\Desktop_Qt_6_8_2_MinGW_64_bit-Debug\CMakeFiles\RESTAPI_SERVER_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/RESTAPI_SERVER_autogen.dir/depend

