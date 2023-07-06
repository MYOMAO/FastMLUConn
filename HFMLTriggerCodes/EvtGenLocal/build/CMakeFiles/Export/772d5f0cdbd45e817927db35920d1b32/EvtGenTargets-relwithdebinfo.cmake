#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "EvtGen::EvtGen" for configuration "RelWithDebInfo"
set_property(TARGET EvtGen::EvtGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(EvtGen::EvtGen PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libEvtGen.so.2.2.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libEvtGen.so.2"
  )

list(APPEND _cmake_import_check_targets EvtGen::EvtGen )
list(APPEND _cmake_import_check_files_for_EvtGen::EvtGen "${_IMPORT_PREFIX}/lib64/libEvtGen.so.2.2.0" )

# Import target "EvtGen::EvtGenStatic" for configuration "RelWithDebInfo"
set_property(TARGET EvtGen::EvtGenStatic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(EvtGen::EvtGenStatic PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libEvtGen.a"
  )

list(APPEND _cmake_import_check_targets EvtGen::EvtGenStatic )
list(APPEND _cmake_import_check_files_for_EvtGen::EvtGenStatic "${_IMPORT_PREFIX}/lib64/libEvtGen.a" )

# Import target "EvtGen::EvtGenExternal" for configuration "RelWithDebInfo"
set_property(TARGET EvtGen::EvtGenExternal APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(EvtGen::EvtGenExternal PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libEvtGenExternal.so.2.2.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libEvtGenExternal.so.2"
  )

list(APPEND _cmake_import_check_targets EvtGen::EvtGenExternal )
list(APPEND _cmake_import_check_files_for_EvtGen::EvtGenExternal "${_IMPORT_PREFIX}/lib64/libEvtGenExternal.so.2.2.0" )

# Import target "EvtGen::EvtGenExternalStatic" for configuration "RelWithDebInfo"
set_property(TARGET EvtGen::EvtGenExternalStatic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(EvtGen::EvtGenExternalStatic PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libEvtGenExternal.a"
  )

list(APPEND _cmake_import_check_targets EvtGen::EvtGenExternalStatic )
list(APPEND _cmake_import_check_files_for_EvtGen::EvtGenExternalStatic "${_IMPORT_PREFIX}/lib64/libEvtGenExternal.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
