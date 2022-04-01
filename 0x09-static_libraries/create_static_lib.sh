#!/bin/bash
gcc -wall -pedantic -werror -waxtra -c *.c
ar -rc liball.a *.o
