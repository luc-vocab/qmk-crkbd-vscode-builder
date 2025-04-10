#!/bin/bash

set -xe

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py
. $BASEDIR/qmk_tag.sh
REBUILD_DOCKER=$1

export DOCKER_BUILDKIT=1
echo "QMK_TAG: " $QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder:QMK-${QMK_TAG}

if [ "$REBUILD_DOCKER" = "rebuild" ]; then
    # build image if not already built (will cache)
    docker build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile .
    # push image to docker hub
    docker push ${DOCKER_IMAGE}
fi


docker run --rm -it \
--mount type=bind,source="$(pwd)"/keymap,target=/workspace/qmk_firmware/keyboards/crkbd/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/qmk_firmware/users/luc \
--mount type=bind,source=${HOME}/code/keyboard/firmware,target=/firmware \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware/crkbd/"

rclone sync ~/keyboard/firmware/crkbd/ dropbox:Keyboard/firmware/crkbd/
rclone copy ~/keyboard/qmk-crkbd-vscode-builder/keybindings.json dropbox:Keyboard/vscode