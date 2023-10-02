#!/bin/bash

declare -a names=('Arjun', 'Ram', 'Shivani', 'Shyam', 'Sita', 'Luffy', 'Garp')
echo "There are ${#names[@]} elements in the array"
echo "The elements are: ${names[@]}"
echo "The 5th element is ${names[5]}"