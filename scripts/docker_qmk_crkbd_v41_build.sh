#!/bin/bash

set -xe

BASEDIR=$(dirname $0)

. $BASEDIR/directories.sh

python3 $BASEDIR/process_mapping.py
# . $BASEDIR/qmk_tag.sh
QMK_TAG=master
REBUILD_DOCKER=$1

export DOCKER_BUILDKIT=1
echo "QMK_TAG: " $QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder-crkbd-v41:foostan-${QMK_TAG}

if [ "$REBUILD_DOCKER" = "rebuild" ]; then
    # build image if not already built (will cache)
    docker build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile.crkbd_v41 .
    # push image to docker hub
    docker push ${DOCKER_IMAGE}
fi


docker run --rm -it \
--mount type=bind,source="$(pwd)"/keymap_crkbd_v41,target=/workspace/kbd_firmware/keyboards/crkbd/qmk/qmk_firmware/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/kbd_firmware/src/qmk/qmk_firmware/users/luc \
--mount type=bind,source=${FIRMWARE_DIR},target=/firmware \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/kbd_firmware && kb=crkbd kr=rev4_1/standard km=luc make qmk-compile && cp keyboards/crkbd/qmk/qmk_firmware/.build/*.uf2 /firmware/crkbd_v41/"

rclone sync ${FIRMWARE_DIR}/crkbd_v41/ dropbox:Keyboard/firmware/crkbd_v41/
rclone copy ${KEYBOARD_DIR}/qmk-crkbd-vscode-builder/keybindings.json dropbox:Keyboard/vscode/