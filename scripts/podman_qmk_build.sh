#!/bin/bash

BASEDIR=$(dirname $0)
python3 $BASEDIR/process_mapping.py
. $BASEDIR/qmk_tag.sh

echo "QMK_TAG: " $QMK_TAG
DOCKER_IMAGE=lucwastiaux/qmk-crkbd-vscode-builder:QMK-${QMK_TAG}

# build image if not already built (will cache)
podman build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t ${DOCKER_IMAGE} -f Dockerfile .

podman run -it --rm \
--user luc --userns=keep-id \
-v "$(pwd)"/keymap:/workspace/qmk_firmware/keyboards/crkbd/keymaps/luc:Z \
-v "$(pwd)"/user:/workspace/qmk_firmware/users/luc:Z \
-v ${HOME}/keyboard/firmware:/firmware:Z \
--name qmk-crkbd-vscode-builder \
${DOCKER_IMAGE} \
sh -c "cd /workspace/qmk_firmware && qmk compile -kb crkbd -km luc && cp *.hex /firmware" || exit 1

$HOME/scripts/copy_qmk_firmware_to_dropbox.sh