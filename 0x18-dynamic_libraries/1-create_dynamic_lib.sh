#!/usr/bin/bash
gcc -Wall -Werror -fplc *.c
gcc -shared *.o -o liball.so
