#!/bin/bash

# need to use an ubuntu image, because qmk needs an older version of avr-gcc
# toolbox create -c qmk-4 -i docker.io/jmennius/ubuntu-toolbox:20.04

BASEDIR=$(dirname $0)

# create workspace
sudo mkdir /workspace
sudo chown $USER:$USER /workspace
# install dependencies
sudo apt update
sudo apt -y install python3-pip
sudo pip3 install qmk
qmk setup --home /workspace/qmk_firmware
# link to keymap and user config
ln -s $BASEDIR/../keymap /workspace/qmk_firmware/keyboards/crkbd/keymaps/$USER
ln -s $BASEDIR/../user /workspace/qmk_firmware/users/$USER

