#!/bin/bash

echo "-------------- Build All To Make HepMC3 Running --------------------"

source /opt/sphenix/core/bin/sphenix_setup.csh -n ana.355

rm -r install
mkdir install
export MYINSTALL=$PWD/install/
export LD_LIBRARY_PATH=$MYINSTALL/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$MYINSTALL/lib64:$LD_LIBRARY_PATH

export PATH=$MYINSTALL/bin:$PATH

echo "Build trackbase_historic"

echo "Build main"

cd eic-smear/build/
rm -rf *
cmake ../ -DCMAKE_INSTALL_PREFIX=${MYINSTALL}
make -j10 install
cd ../../

cd EvtGenLocal/build/
make -j10 install
cp lib64/* $MYINSTALL/lib/
cd ../../

cp install/lib64/* install/lib

cd HFMLTrigger_LANL/
make clean
autogen.sh --prefix=$MYINSTALL
make
make install
cd ../

cd AntiTrigger/
autogen.sh --prefix=$MYINSTALL
make
make install
cd ../

export ROOT_INCLUDE_PATH=${PWD}/macros/common:$ROOT_INCLUDE_PATH

#echo "-------------- DONE CHANGING SOFTWARE NOW BRO --------------------"
