#!/bin/bash
wget -q -O /tmp/liball.so "https://raw.githubusercontent.com/Assel2020/alx-low_level_programming/master/0x18-dynamic_libraries/liball.so"
export LD_PRELOAD=/tmp/liball.so

