#!/bin/bash
gcc -c *.c
ar rcs liball.a
ar rcs liball.a *.c
ranlib liball.a
