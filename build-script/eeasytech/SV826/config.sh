#!/usr/bin/env bash

chip=SV826

product=HY-8808 HY-8808E HY-8808EV2

host=arm-linux-gnueabihf
cross_gcc_path=/opt/data/opt/toolchains/yizhi/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-

configure_param=

cppflag=-fstack-protector-all
cflag=
cxxflag=
ldflag=-rdynamic
lib=

install_path=/opt/data/office/xia/app-fw
