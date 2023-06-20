#!/bin/bash

shopt -s nullglob

c_files=( $(ls *.c) )
name="liball.so"

shopt -u nullglob

if [ ${#c_files[@]} -eq 0 ]; then
    echo "No .c file found"
else
   for file in "${c_files[@]}"; do
           gcc -fpic -c "$file"
   done
fi

gcc -shared -o "$name" *.o
