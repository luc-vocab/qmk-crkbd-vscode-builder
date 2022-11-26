#!/bin/bash

docker run -it \
--mount type=bind,source="$(pwd)"/keymap,target=/qmk_firmware/keyboards/crkbd/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/qmk_firmware/users/luc \
--mount type=bind,source="$(pwd)"/firmware,target=/firmware \
lucwastiaux/qmk-crkbd-vscode-builder:latest \
sh -c "cd /qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware"