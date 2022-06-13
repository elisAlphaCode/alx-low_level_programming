#!/bin/bash
gcc -c -fpic *.c
gcc -shared -o libdynamic.so *.o
