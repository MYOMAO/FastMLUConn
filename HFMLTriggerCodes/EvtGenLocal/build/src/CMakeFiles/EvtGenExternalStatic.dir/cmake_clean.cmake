file(REMOVE_RECURSE
  "../lib64/libEvtGenExternal.a"
  "../lib64/libEvtGenExternal.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/EvtGenExternalStatic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
