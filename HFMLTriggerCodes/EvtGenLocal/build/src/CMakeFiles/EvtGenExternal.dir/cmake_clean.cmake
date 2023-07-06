file(REMOVE_RECURSE
  "../lib64/libEvtGenExternal.pdb"
  "../lib64/libEvtGenExternal.so"
  "../lib64/libEvtGenExternal.so.2"
  "../lib64/libEvtGenExternal.so.2.2.0"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/EvtGenExternal.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
