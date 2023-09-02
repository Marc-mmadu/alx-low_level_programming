#!/bin/bash
gcc -Wall -Werror -Wextra -o *.c
ar -rc liball.a *.c
ranlib liball.a
