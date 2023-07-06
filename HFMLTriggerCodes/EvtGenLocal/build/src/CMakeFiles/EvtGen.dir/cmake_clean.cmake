file(REMOVE_RECURSE
  "../lib64/libEvtGen.pdb"
  "../lib64/libEvtGen.so"
  "../lib64/libEvtGen.so.2"
  "../lib64/libEvtGen.so.2.2.0"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/EvtGen.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
