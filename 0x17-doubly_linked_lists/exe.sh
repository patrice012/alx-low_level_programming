#!/bin/bash


# Get the current working directory
directory=$(pwd)

shopt -s nullglob

# Create an empty array
c_file=()


# Check if any files match the patterns
c_files=( "$directory"/*.c )
h_files=( "$directory"/*.h )

shopt -u nullglob


# Add the matching files to the array
c_file+=( "${c_files[@]}" "${h_files[@]}" )


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
