echo "-------------- CHANGING SOFTWARE NOW BRO --------------------"



source /opt/sphenix/core/bin/sphenix_setup.csh -n  ana.355




rm -r install

mkdir install
setenv MYINSTALL $PWD/install/
setenv LD_LIBRARY_PATH $MYINSTALL/lib:$LD_LIBRARY_PATH
set path = ( $MYINSTALL/bin $path )





cd HFMLTrigger_LANL/
make clean
autogen.sh --prefix=$MYINSTALL
make -j20 install


cd ../

cd AntiTrigger/
make clean
autogen.sh --prefix=$MYINSTALL
make -j20 install


cd ../


setenv ROOT_INCLUDE_PATH ${PWD}/macros/common:$ROOT_INCLUDE_PATH

#echo "-------------- DONE CHANGING SOFTWARE NOW BRO --------------------"
