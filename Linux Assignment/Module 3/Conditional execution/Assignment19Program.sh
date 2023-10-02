#!/bin/bash
read -p “Enter your name: “ name
if [ $name == $USER ]; then
echo -e “Hello\n”
else
echo -e “Try again\n”
fi