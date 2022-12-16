#!/bin/bash

docker build --build-arg UNAME=$(id -un) --build-arg UID=$(id -u) --build-arg GID=$(id -g) -t lucwastiaux/qmk-crkbd-vscode-builder:latest -f Dockerfile .