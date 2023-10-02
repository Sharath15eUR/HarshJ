#!/usr/bin/env bash

multiply(){
a=$1
b=$2
echo -e "$a x $b = $(($a*$b))"
}
multiply 1 2
multiply 2 3
multiply 3 4
