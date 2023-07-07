echo "-------------- Build All To Make HepMC3 Running --------------------"


source /opt/sphenix/core/bin/sphenix_setup.csh -n ana.355

#source /opt/sphenix/core/bin/sphenix_setup.csh -n new

#setenv LD_LIBRARY_PATH /sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/HepMC3Local/HepMC3/build/lib64/:$LD_LIBRARY_PATH 


rm -r install

mkdir install
setenv MYINSTALL $PWD/install/
setenv LD_LIBRARY_PATH $MYINSTALL/lib:$LD_LIBRARY_PATH
setenv LD_LIBRARY_PATH $MYINSTALL/lib64:$LD_LIBRARY_PATH

set path = ( $MYINSTALL/bin $path )

#source $OPT_SPHENIX/bin/setup_local.csh $MYINSTALL
echo "Build trackbase_historic"


#cd trackbase_historic 

#autogen.sh --prefix=$MYINSTALL
#make
#make install

#cd ../


#cd  coresoftware/simulation/g4simulation/g4main/
#make clean
#autogen.sh --prefix=$MYINSTALL
#make -j10 install
#make install


#cd ../../../../


setenv LD_LIBRARY_PATH /sphenix/user/zshi/FastMLUConn/HFMLTriggerCodes/HepMC3Local/HepMC3/build/lib64/:$LD_LIBRARY_PATH

echo "-------------- BUILD main ------------------------"


cd eic-smear/build/

rm -rf *

cmake ../  -DCMAKE_INSTALL_PREFIX=${MYINSTALL} 
make -j10 install

cd ../../


cd EvtGenLocal/build/

make -j10 install

cp lib64/* $MYINSTALL/lib/

cd ../../




cp install/lib64/* install/lib


cd HFMLTrigger_LANL/
make clean
#cd coresoftware/simulation/g4simulation/g4detectors/
autogen.sh --prefix=$MYINSTALL
make
make install


cd ../

cd AntiTrigger/

autogen.sh --prefix=$MYINSTALL
make
make install


cd ../


setenv ROOT_INCLUDE_PATH ${PWD}/macros/common:$ROOT_INCLUDE_PATH

#echo "-------------- DONE CHANGING SOFTWARE NOW BRO --------------------"
