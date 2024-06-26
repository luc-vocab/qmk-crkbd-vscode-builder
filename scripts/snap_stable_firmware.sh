#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 VERSION_NUMBER"
    exit 1
fi

VERSION_NUMBER=$1 # for example 0.1
GIT_TAG=v${VERSION_NUMBER}

git tag -a ${GIT_TAG} -m "version ${GIT_TAG}"
git push origin ${GIT_TAG}

echo "qmk-crkbd-vscode-builder tag ${GIT_TAG}" > build_info.txt
md5sum ~/keyboard/firmware/*.hex >> build_info.txt
md5sum ~/keyboard/firmware/*.bin >> build_info.txt
rclone copy ~/keyboard/firmware/*.hex dropbox:Keyboard/stable_firmware
rclone copy ~/keyboard/firmware/*.bin dropbox:Keyboard/stable_firmware
rclone copy build_info.txt dropbox:Keyboard/stable_firmware