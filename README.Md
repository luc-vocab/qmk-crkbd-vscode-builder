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

# How does the VSCode mapping work ?

You define your shortcuts in `process_mapping.py`. Define the keycode name (which you'll be able to use in your layouts), the modifier and the key. Finally, the VSCode command iid.

    class Mapping(enum.Enum):
        VS_COMMANDS         = (Modifier.MEH,  'b', 'workbench.action.showCommands')
        VS_LINE             = (Modifier.MEH,  'c', 'workbench.action.gotoLine')
        VS_DEFINITION       = (Modifier.MEH,  'e', 'editor.action.revealDefinition')
        VS_IMPLEMENTATION   = (Modifier.MEH,  'f', 'editor.action.goToImplementation')
        VS_REFERENCES       = (Modifier.MEH,  'g', 'editor.action.goToReferences')

When you run the python script, it generates two files:
`vscode_macros.h`, which will be included in the QMK build process.

    #pragma once
    #define VS_COMMANDS              MEH(KC_B)       // workbench.action.showCommands
    #define VS_LINE                  MEH(KC_C)       // workbench.action.gotoLine
    #define VS_DEFINITION            MEH(KC_E)       // editor.action.revealDefinition
    #define VS_IMPLEMENTATION        MEH(KC_F)       // editor.action.goToImplementation
    #define VS_REFERENCES            MEH(KC_G)       // editor.action.goToReferences

And `keybindings.json`, which is in the VSCode keyboard shortcut format.

    [
        {
            "key": "ctrl+shift+alt+b",
            "command": "workbench.action.showCommands"
        },
        {
            "key": "ctrl+shift+alt+c",
            "command": "workbench.action.gotoLine"
        },
        {
            "key": "ctrl+shift+alt+e",
            "command": "editor.action.revealDefinition"
        },
        {
            "key": "ctrl+shift+alt+f",
            "command": "editor.action.goToImplementation"
        },


# What's the benefit of this ?
* The massive `qmk_firmware` repository doesn't take up space in my home directory and in my home directory backups anymore. It doesn't slown down my rsync runs. Note that in order to achieve this, we need to check it out outside of the home directory (which is exposed inside the toolbox environment).
* The large amount of build tools required to build qmk don't need to be in my main system. I never use those tools in my daily life except to build the qmk firmware. With the container setup, I can wipe them out in one command.
* I don't need to commit my keymaps to the `qmk_firmware` repository anymore. I just keep them here. It's a superior alternative to the solution described here in my opinion: https://docs.qmk.fm/#/newbs_building_firmware_workflow because it doesn't require github.
