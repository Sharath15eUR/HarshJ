#!/bin/bash

declare -a names2=('Arjun', 'Ram', 'Shivani', 'Shyam', 'Sita', 'Luffy', 'Garp')
echo -e "The three names starting from index two are: ${names2[@]:2:5}"
names2[3]='Debian'
echo -e "The elements are: ${names2[@]}"
names2=("${names2[@]}", "Ace")
echo -e "The elements are: ${names2[@]}"