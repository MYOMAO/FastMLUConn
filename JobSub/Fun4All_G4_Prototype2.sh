#!/bin/csh

#source /direct/star+u/zshi/.login

#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/sphenix_setup.csh -n ana.141

#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/sphenix_setup.csh -n
#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/setup_root6.csh

#source /opt/sphenix/core/bin/sphenix_setup.csh -n
#source /opt/sphenix/core/bin/setup_root6.csh

#source /opt/sphenix/core/bin/setup_root6_include_path.csh



echo "START PRINT ENV"

#printenv


echo "DONE PRINt ENV"

set NEvent=$argv[1]
set Name=$argv[2]



#source /opt/sphenix/core/bin/sphenix_setup.csh -n





#source Build.sh


echo "Now PWD"

pwd

ls

echo "DONE CHECK"

cd workdir

mkdir ${Name}

cp -r ../../HFMLTriggerCodes/ ${Name} 
#cp ../Build.sh  ${Name}/


cd ${Name}/HFMLTriggerCodes/

echo "NowList"

ls *


#setenv ROOT_INCLUDE_PATH /sphenix/user/zshi/FastMLWork7/JobSub/workdir/${Name}/macros/common:$ROOT_INCLUDE_PATH





#cd HFMLTrigger_LANL 

sh Build.sh


#setenv ROOT_INCLUDE_PATH /sphenix/user/zshi/EvtGenTestJobSub/workdir/${Name}/macros/common:$ROOT_INCLUDE_PATH


echo "DONE BUILD"

cd macros/detectors/sPHENIX/

#rm MyQAFile.root



root -b -l -q Fun4All_G4_sPHENIX.C'('${NEvent}')'

ls *root

#mv MyQAFile.root  ../../../../../OutFiles/MyQAFile_${Name}.root
#mv Test2.json ../../../../../OutFiles/Background/D0Background_${Name}.json
mv NewTest.json ../../../../../../OutFiles/Signal/D0Signal_${Name}.json

#mv Test2.json ../../../../../OutFiles/NewSignal/D0Signal_${Name}.json

#mv BRFile.root ../../../../../OutFiles/BRFile_${Name}.root

#mv G4EICDetector.root_g4femc_eval.root ../../../ERECO/${Material}/${Rad}/${Energy}/G4EICDetector.root_g4femc_eval_${Name}.root


cd ../../../../../

rm -rf ${Name}



