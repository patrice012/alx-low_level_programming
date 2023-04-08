#!/bin/bash

# compile without linking all files ending with .c 
gcc -c *.c

# create liball.a archive using all objects files
ar rc liball.a *.o

# index liball.a
ranlib liball.a
