#!/bin/bash

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py
. $BASEDIR/qmk_tag.sh

export DOCKER_BUILDKIT=1
echo "QMK_TAG: " $QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder:QMK-${QMK_TAG}

# build image if not already built (will cache)
docker build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile .

docker run --rm -it \
--mount type=bind,source="$(pwd)"/keymap,target=/workspace/qmk_firmware/keyboards/crkbd/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/qmk_firmware/users/luc \
--mount type=bind,source=${HOME}/keyboard/firmware,target=/firmware \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware" || exit 1

rclone copy ~/keyboard/firmware/*.hex dropbox:Keyboard/firmware
rclone copy ~/keyboard/qmk-crkbd-vscode-builder/keybindings.json dropbox:Keyboard/vscode