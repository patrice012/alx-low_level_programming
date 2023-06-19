#!/bin/bash

shopt -s nullglob

file=( *.c *h)

shopt -u nullglob

if [ ${#file[@]} -eq 0 ]; then
    echo "No .c file found"
else
   for i in "${file[@]}"; do
       betty "$i"
   done
fi
