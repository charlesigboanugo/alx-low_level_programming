#!/bin/bash
wget -P /tmp https://github.com/charlesigboanugo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgigamillions.so
export LD_PRELOAD=/tmp/libgigamillions.so
