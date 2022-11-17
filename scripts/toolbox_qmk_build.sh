#!/bin/bash

BASEDIR=$(dirname $0)

python3 $BASEDIR/process_mapping.py
cd /workspace/qmk_firmware && qmk compile -kb crkbd -km $USER && cp  *.hex ~/keyboard/firmware/
