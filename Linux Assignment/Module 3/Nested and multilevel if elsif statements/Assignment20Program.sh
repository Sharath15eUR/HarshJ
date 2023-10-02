#!/bin/bash
read -p “Enter the number: “ number
if [ -z $number ]; then
echo -e “Input is empty\n”
elif [ $number -eq 3 ]; then
echo -e “The number is equal to 3\n”
elif [  $number -gt 3 ]; then
echo -e “The number is greater than 3\n”
else
echo -e “The number is less than 3\n”
fi