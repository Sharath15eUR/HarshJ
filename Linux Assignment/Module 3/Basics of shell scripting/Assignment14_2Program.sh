#!/bin/bash
read -t 10 -p "Enter username:" username
if [ -z "$username" ]; then
exit

echo "Hello $username"
fi