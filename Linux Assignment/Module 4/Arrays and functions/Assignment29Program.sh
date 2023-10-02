#!/usr/bin/env bash

addarray(){
    declare -a arr1=$1
    declare -a arr2=$2
    declare -a sum=()
    n=${#arr1[@]}
    for ((i=0; i<n; i++)); do
    sum[i]=$(($arr1[i]+$arr2[i]))
    done
    echo ${sum[@]}
}
addarray "(1 2 3)" "(4 5 6)"