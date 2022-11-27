#!/bin/bash

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py

docker run -it \
--mount type=bind,source="$(pwd)"/keymap,target=/workspace/qmk_firmware/keyboards/crkbd/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/qmk_firmware/users/luc \
--mount type=bind,source=${HOME}/keyboard/firmware,target=/firmware \
lucwastiaux/qmk-crkbd-vscode-builder:latest \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware"