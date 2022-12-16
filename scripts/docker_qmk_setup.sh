#!/bin/bash

. qmk_tag.sh

echo "QMK_TAG: " $QMK_TAG
docker build --build-arg QMK_TAG=$QMK_TAG --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t lucwastiaux/qmk-crkbd-vscode-builder:QMK-${QMK_TAG} -f Dockerfile .