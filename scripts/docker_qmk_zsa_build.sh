#!/bin/bash

set -xe

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py
. $BASEDIR/zsa_qmk_tag.sh
REBUILD_DOCKER=$1

export DOCKER_BUILDKIT=1
echo "ZSA_QMK_TAG: " $ZSA_QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder-zsa:QMK_ZSA-${ZSA_QMK_TAG}

if [ "$REBUILD_DOCKER" = "rebuild" ]; then
    # build image if not already built (will cache)
    docker build --build-arg ZSA_QMK_TAG=$ZSA_QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile.zsa_qmk .
    # push image to docker hub
    docker push ${DOCKER_IMAGE}    
fi

docker run --rm -it \
--mount type=bind,source="$(pwd)"/keymap_voyager,target=/workspace/qmk_firmware/keyboards/voyager/keymaps/luc \
--mount type=bind,source="$(pwd)"/user,target=/workspace/qmk_firmware/users/luc \
--mount type=bind,source=${HOME}/keyboard/firmware,target=/firmware \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb voyager -km luc && cp *.bin /firmware/voyager/"

rclone sync ~/keyboard/firmware/voyager/ dropbox:Keyboard/firmware/voyager/
rclone copy ~/keyboard/qmk-crkbd-vscode-builder/keybindings.json dropbox:Keyboard/vscode