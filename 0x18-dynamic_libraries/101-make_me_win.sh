#!/bin/bash
wget -P /tmp https://github.com/emmanuelist/alx-low_level_programming/raw/main/0x18-dynamic_libraries/cwin.so
export LD_PRELOAD=/tmp/cwin.so