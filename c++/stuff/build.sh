#!/bin/bash

if [ -f $1 ]; then
	echo "$1 was erased successfully :)"
	rm $1
	clear
else
	echo "$1 was not found" 
fi

g++ -std=c++14 $1".cpp" -o $1

if [ -f $1 ]; then
	echo ":: Executing the compiled Code :: "
	echo "$1.cpp running..."
	echo ""
	./$1
else 
	echo "$1 was not found :("
fi

