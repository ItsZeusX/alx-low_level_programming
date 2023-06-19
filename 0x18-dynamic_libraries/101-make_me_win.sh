#!/bin/bash
wget -P /tmp https://github.com/samuelselasi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/task_crack.so
export LD_PRELOAD=/tmp/task_crack.so
