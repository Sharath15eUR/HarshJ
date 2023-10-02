#!/usr/bin/env bash

read -p "Enter first number:" a
read -p "Enter second number:" b
echo "Enter for 'add' for addition"
echo "Enter for 'sub' for subtraction"
echo "Enter for 'mul' for multiplication"
echo "Enter for 'div' for division"
read op
case "$op" in
"") echo "No option specified";;

add) echo "$(($a+$b))";;

sub) echo "$(($a-$b))";;

mul) echo "$(($a*$b))";;

div) echo "$(($a/$b))";;

*) echo "Wrong option";;
esac