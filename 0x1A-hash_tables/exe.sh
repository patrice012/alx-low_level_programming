#!/bin/bash


# Get the current working directory
directory=$(pwd)

shopt -s nullglob

# Create an empty array
c_file=()
py_file=()


# Check if any files match the patterns
c_files=( "$directory"/*.c )
h_files=( "$directory"/*.h )
py_files=( "$directory"/*py )

shopt -u nullglob


# Add the matching files to the array
c_file+=( "${c_files[@]}" "${h_files[@]}" )
py_file+=( "${py_files[@]}" )


# run commands

if [ ${#c_file[@]} -eq 0 ]; then
  echo "no .c file found"
else
  # Loop through each .c file and run the betty style check
  for file in "${c_file[@]}"; do
    betty "$file"
    #betty-doc.pl "$file"
  done
fi

file_name="0-hash_table_create.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
fi

file_name="1-djb2.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
fi

file_name="2-key_index.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
fi

file_name="3-hash_table_set.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
fi

file_name="4-hash_table_get.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
fi

file_name="5-hash_table_print.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
fi

file_name="6-hash_table_delete.c"
if [[ " $c_file[*] " == *" $file_name "* ]]; then
  gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
fi


if [ ${#py_file[@]} -eq 0 ]; then
	echo "no .py file found"
else
  for file in "${py_file[@]}"; do
    chmod +x *-main.py
  done
fi
