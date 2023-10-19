#!/usr/bin/env bash

read -p "Enter number:" num
n=$(echo $num | wc --char)
n=$(($n-1))
rev=0
for ((i=0; i<n; i++));
do
r=$(($r%10));
rev=$(($r+$rev*10))
num=$(($num/10))
done
echo $rev