#!/bin/bash

if [ $1 == 1 ]; then
	OUTPUT="$(./fillit)"
	if [ "${OUTPUT}" == "usage: ./fillit source_file" ]; then
		echo "OK"
	else
		echo "FAIL"
	fi

elif [ $1 == 2 ]; then
	OUTPUT="$(./fillit tests/totor)"
	if [ "${OUTPUT}" == "error" ]; then
		echo "OK"
	else
		echo "FAIL"
	fi

elif [ $1 == 3 ]; then
	OUTPUT="$(./fillit tests/test1)"
	if [ "${OUTPUT}" == "122.\n122.\n1...\n1..." ]; then
		echo "OK"
	else
		echo "FAIL"
	fi

elif [ $1 == 4 ]; then
	OUTPUT="$(./fillit tests/test1 tests/test2)"
	if [ "${OUTPUT}" == "usage: ./fillit source_file" ]; then
		echo "OK"
	else
		echo "FAIL"
	fi
fi
