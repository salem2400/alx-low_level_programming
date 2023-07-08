#!/bin/bash
gcc  -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a
ar rcs liball.a *.c
ranlib liball.a
