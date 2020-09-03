#!/bin/bash

# The default env from SVI team
# export PATH=/opt/gcc-arm-none-eabi-8-2019-q3-update/bin:$PATH
# export ARCH=armv7m
# export CROSS_COMPILE=arm-none-eabi-

export PATH=/opt/gcc-linaro-7.4.1-2019.02-x86_64_aarch64-linux-gnu/bin:$PATH
export PATH=/opt/gcc-arm-none-eabi-8-2019-q3-update/bin:$PATH

GLIBC="/opt/glibc-2.14/lib"

for dir in $GLIBC
do
	if [ -d $dir ]; then
		export LD_LIBRARY_PATH=$dir
	fi
done

# From Yongqing.
export ARCH=armv7m
export PATH=/opt/gcc-arm-none-eabi-8-2019-q3-update/bin:$PATH
export LD_LIBRARY_PATH=/opt/glibc-2.14/lib
export CROSS_COMPILE=arm-none-eabi-
# echo "#define M4_IPS" > drivers/crypto/crypto_control.h
# echo "#define M4_SMX" >> drivers/crypto/crypto_control.h
