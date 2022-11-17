# What this is 
This repository contains a set of scripts for building a QMK crkbd keymap in a *toolbox* container, with dynamically generated VSCode macros + keymap. If you look at `scripts/process_mappings.py`, you'll understand what I mean. I want to define a VSCode command ID, and decide where it should go on my keyboard. Traditionally with QMK this is done in two steps, first chose an unused keyboard shortcuts like `Ctrl+Alt+Shift+F6` or something like this, flashing the firmware, and then making the appropriate change in your VSCode ```keybindings.json```. I want to reduce this to one step.

Additionally, I want to build a QMK firmware without having the QMK repo take up space in my home directory. This is achieved by building inside a *toolbox* container on my Fedora Silverblue distribution.
# Create toolbox container
Create the toolbox and enter it:

    toolbox create qmk
    toolbox enter qmk

# Build the firmware
Once inside the toolbox, retrieve all dependencies and qmk repository:

    # this only needs to be run once
    scripts/toolbox_qmk_setup.sh
    # now build the firmware (everytime you make a change to the keymap)
    scripts/toolbox_qmk_build.sh

