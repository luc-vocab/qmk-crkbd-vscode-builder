#!/bin/bash

BASEDIR=$(dirname $0)

sudo mkdir /workspace
sudo chown $USER:$USER /workspace
sudo dnf -y install python3-pip gcc unzip wget zip dfu-util dfu-programmer avr-gcc avr-libc binutils-avr32-linux-gnu arm-none-eabi-gcc-cs arm-none-eabi-binutils-cs arm-none-eabi-newlib avrdude
sudo python3 -m pip install qmk
qmk setup --home /workspace/qmk_firmware
# link to keymap and user config
ln -s $BASEDIR/../keymap /workspace/qmk_firmware/keyboards/crkbd/keymaps/$USER
ln -s $BASEDIR/../user /workspace/qmk_firmware/users/$USER

