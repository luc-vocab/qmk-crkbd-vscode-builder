#!/bin/bash

cd /workspace/qmk_firmware && qmk compile -kb crkbd -km $USER && cp  *.hex ~/keyboard/firmware/
