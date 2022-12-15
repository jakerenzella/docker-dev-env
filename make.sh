#!/bin/bash

# Check there's exactly 2 arguments
if (( $# == 2 )); then

    # Compile with vulnerabilities
    # TODO Check that the input and output variables are okay
    gcc $1 -o $2 -O0 -fno-stack-protector -std=c99 -m32 -no-pie -fno-pie
    exit 0

else

    # Print usage
    echo "Usage:"
    echo "$0 <input.c> <output>"
    exit 0

fi 
