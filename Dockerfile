# how to build
# docker build -t lucwastiaux/qmk-crkbd-vscode-builder:latest -f Dockerfile .
# run 
# docker run -it --mount type=bind,source="$(pwd)"/keymap,target=/qmk_firmware/keyboards/crkbd/keymaps/luc --mount type=bind,source="$(pwd)"/user,target=/qmk_firmware/users/luc lucwastiaux/qmk-crkbd-vscode-builder:latest
#
# debug:
# look inside image:
# docker run -it lucwastiaux/qmk-crkbd-vscode-builder:latest sh

FROM ubuntu:20.04

# use ubuntu mirrors
RUN sed -i -e 's|archive\.ubuntu\.com|mirrors\.xtom\.com\.hk|g' /etc/apt/sources.list
# install packages first
# https://github.com/samhocevar-forks/qmk-firmware/blob/master/docs/getting_started_build_tools.md
RUN apt-get update -y && apt-get install -y python3-pip git gcc unzip wget zip gcc-avr binutils-avr avr-libc dfu-programmer dfu-util gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi
RUN pip3 install qmk
#RUN qmk setup -H /qmk_firmware
RUN git clone https://github.com/qmk/qmk_firmware.git /qmk_firmware
RUN cd /qmk_firmware && make git-submodule

