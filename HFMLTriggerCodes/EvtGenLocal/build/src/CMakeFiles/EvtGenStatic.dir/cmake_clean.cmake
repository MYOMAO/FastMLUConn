file(REMOVE_RECURSE
  "../lib64/libEvtGen.a"
  "../lib64/libEvtGen.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/EvtGenStatic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
