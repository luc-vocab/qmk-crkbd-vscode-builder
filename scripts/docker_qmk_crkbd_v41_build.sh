#!/bin/bash

set -xe

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py
. $BASEDIR/qmk_tag.sh
REBUILD_DOCKER=$1

export DOCKER_BUILDKIT=1
echo "QMK_TAG: " $QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder-crkbd-v41:QMK-${QMK_TAG}

if [ "$REBUILD_DOCKER" = "rebuild" ]; then
    # build image if not already built (will cache)
    docker build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile.crkbd_v41 .
    # push image to docker hub
    docker push ${DOCKER_IMAGE}
fi


docker run --rm -it \
--mount type=bind,source="$(pwd)"/keymap_crkbd_v41,target=/workspace/qmk_firmware/keyboards/crkbd/rev4/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/qmk_firmware/users/luc \
--mount type=bind,source=${HOME}/keyboard/firmware,target=/firmware \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd/rev4 -km luc && cp *.hex /firmware" || exit 1

rclone copy ~/keyboard/firmware/*.hex dropbox:Keyboard/firmware
rclone copy ~/keyboard/qmk-crkbd-vscode-builder/keybindings.json dropbox:Keyboard/vscode