#!/bin/bash
clear
set -e
n_cores=`cat /proc/cpuinfo | grep processor | wc -l`
let "n_cores++"

input=$1
export env_filename=$input

find *.cpp | xargs dos2unix

mkdir -p build && cd build
cmake ..
make -j$n_cores -B

./$env_filename.out < ../$env_filename.in