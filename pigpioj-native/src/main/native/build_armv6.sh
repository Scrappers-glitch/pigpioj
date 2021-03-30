#!/bin/sh

PATH=/home/vagrant/rpi-tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin:$PATH
make clean && make CROSS_PREFIX=arm-linux-gnueabihf- ARCH=armv6 CC_CFLAGS="-mfpu=vfp -mfloat-abi=hard"
mkdir -p armv6
mv libpigpioj.so libpigpioj-arm.so
