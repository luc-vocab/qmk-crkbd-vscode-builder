#!/bin/bash

. $BASEDIR/directories.sh

if [ $# -ne 1 ]; then
    echo "Usage: $0 VERSION_NUMBER"
    exit 1
fi

VERSION_NUMBER=$1 # for example 0.1
GIT_TAG=v${VERSION_NUMBER}

git tag -a ${GIT_TAG} -m "version ${GIT_TAG}"
git push origin ${GIT_TAG}

echo "qmk-crkbd-vscode-builder tag ${GIT_TAG}" > build_info.txt
find ${FIRMWARE_DIR}/ -type f | xargs md5sum >> build_info.txt
rclone sync ${FIRMWARE_DIR}/ dropbox:Keyboard/stable_firmware/
rclone copy build_info.txt dropbox:Keyboard/stable_firmware