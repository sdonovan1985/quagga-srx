#! /bin/bash
export LC_LIBRARY_PATH=$HOME/lib
export LIBRARY_PATH=.:$HOME/lib/include/
export CPATH=$LIBRARY_PATH
export LD_LIBRARY_PATH=.:$HOME/lib
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/corsa_admin/lib/lib64/srx
echo $LD_LIBRARY_PATH
export LD_LIBRARY_PATH
