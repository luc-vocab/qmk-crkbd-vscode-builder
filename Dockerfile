# how to build
# docker build --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t lucwastiaux/qmk-crkbd-vscode-builder:latest -f Dockerfile .
# run 
# docker run -it --mount type=bind,source="$(pwd)"/keymap,target=/qmk_firmware/keyboards/crkbd/keymaps/luc --mount type=bind,source="$(pwd)"/user,target=/qmk_firmware/users/luc lucwastiaux/qmk-crkbd-vscode-builder:latest
#
# debug:
# look inside image:
# docker run -it lucwastiaux/qmk-crkbd-vscode-builder:latest sh

FROM ubuntu:20.04

ARG UNAME=qmk_user
ARG UID=1000
ARG GID=1000

# use ubuntu mirrors
RUN sed -i -e 's|archive\.ubuntu\.com|mirrors\.xtom\.com\.hk|g' /etc/apt/sources.list
# install packages first
# https://github.com/samhocevar-forks/qmk-firmware/blob/master/docs/getting_started_build_tools.md
RUN apt-get update -y && apt-get install -y python3-pip git gcc unzip wget zip gcc-avr binutils-avr avr-libc dfu-programmer dfu-util gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi
RUN pip3 install qmk

RUN groupadd -g $GID -o $UNAME
RUN useradd -m -u $UID -g $GID -o -s /bin/bash $UNAME

RUN mkdir /workspace && chown $UNAME:$UNAME /workspace
USER $UNAME
RUN git clone https://github.com/qmk/qmk_firmware.git /workspace/qmk_firmware
RUN cd /workspace/qmk_firmware && make git-submodule

