#!/bin/bash

read -p "Enter first file name:" file1
size1=$(ls -l $file1 | awk -F'[ ]' '{print $5}')
read -p "Enter secoond file name:" file2
size2=$(ls -l $file2 | awk -F'[ ]' '{print $5}')
if [ size1 -ne size2 ]; then
echo "Both files are of different sizes";
else
echo "Both files are of same size";
fi