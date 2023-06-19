#!/bin/bash

mkdir -p vs_2
mkdir -p objects

for file in [0-9]*-*.c; do
    if [ "$file" != "0-main.c" ]; then
        new_name="${file#[0-9]*-}"
        cp $file $new_name
	gcc -fPIC -c $new_name
	mv *.o ./objects/
        mv "$new_name" ./vs_2/
   fi
done

