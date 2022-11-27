#!/bin/bash

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py

podman run -it \
--user luc --userns=keep-id \
-v "$(pwd)"/keymap:/workspace/qmk_firmware/keyboards/crkbd/keymaps/luc:Z \
-v "$(pwd)"/user:/workspace/qmk_firmware/users/luc:Z \
-v ${HOME}/keyboard/firmware:/firmware:Z \
--name qmk-crkbd-vscode-builder \
lucwastiaux/qmk-crkbd-vscode-builder:latest \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware"