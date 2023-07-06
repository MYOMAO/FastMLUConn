# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /cvmfs/sphenix.sdcc.bnl.gov/gcc-12.1.0/opt/sphenix/utils/stow/cmake-3.24.2/bin/cmake

# The command to remove a file.
RM = /cvmfs/sphenix.sdcc.bnl.gov/gcc-12.1.0/opt/sphenix/utils/stow/cmake-3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/evtgen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build

# Include any dependencies generated for this target.
include src/CMakeFiles/EvtGenExternalStatic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/EvtGenExternalStatic.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/EvtGenExternalStatic.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/EvtGenExternalStatic.dir/flags.make

# Object files for target EvtGenExternalStatic
EvtGenExternalStatic_OBJECTS =

# External object files for target EvtGenExternalStatic
EvtGenExternalStatic_EXTERNAL_OBJECTS = \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtExternalGenFactory.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtExternalGenList.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPHOTOS.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPhotosEngine.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythia.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythia6CommandConverter.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythiaEngine.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtTauola.cpp.o" \
"/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtTauolaEngine.cpp.o"

lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtExternalGenFactory.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtExternalGenList.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPHOTOS.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPhotosEngine.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythia.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythia6CommandConverter.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtPythiaEngine.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtTauola.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/objlib_ext.dir/EvtGenExternal/EvtTauolaEngine.cpp.o
lib64/libEvtGenExternal.a: src/CMakeFiles/EvtGenExternalStatic.dir/build.make
lib64/libEvtGenExternal.a: src/CMakeFiles/EvtGenExternalStatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../lib64/libEvtGenExternal.a"
	cd /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src && $(CMAKE_COMMAND) -P CMakeFiles/EvtGenExternalStatic.dir/cmake_clean_target.cmake
	cd /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EvtGenExternalStatic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/EvtGenExternalStatic.dir/build: lib64/libEvtGenExternal.a
.PHONY : src/CMakeFiles/EvtGenExternalStatic.dir/build

src/CMakeFiles/EvtGenExternalStatic.dir/clean:
	cd /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src && $(CMAKE_COMMAND) -P CMakeFiles/EvtGenExternalStatic.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/EvtGenExternalStatic.dir/clean

src/CMakeFiles/EvtGenExternalStatic.dir/depend:
	cd /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/evtgen /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/evtgen/src /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src /gpfs/mnt/gpfs02/sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/EvtGenLocal/build/src/CMakeFiles/EvtGenExternalStatic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/EvtGenExternalStatic.dir/depend
