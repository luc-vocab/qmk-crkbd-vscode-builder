import enum
import json
import os


base_dir = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..')

class Modifier(enum.Enum):
    MEH = ('ctrl+shift+alt+')
    HYPR = ('ctrl+shift+alt+meta+')

    def __init__(self, vscode_shorcut):
        self.vscode_shortcut = vscode_shorcut


class Mapping(enum.Enum):
    VS_BM_TOGGLE        = (Modifier.MEH,  'a', 'bookmarks.toggle')
    VS_COMMANDS         = (Modifier.MEH,  'b', 'workbench.action.showCommands')
    VS_LINE             = (Modifier.MEH,  'c', 'workbench.action.gotoLine')
    VS_DEFINITION       = (Modifier.MEH,  'e', 'editor.action.revealDefinition')
    VS_IMPLEMENTATION   = (Modifier.MEH,  'f', 'editor.action.goToImplementation')
    VS_REFERENCES       = (Modifier.MEH,  'g', 'editor.action.goToReferences')
    VS_BACK             = (Modifier.MEH,  'h', 'workbench.action.navigateBack')
    VS_BRACKET          = (Modifier.MEH,  'i', 'editor.action.jumpToBracket')
    VS_TABLEFT          = (Modifier.MEH,  'j', 'workbench.action.previousEditor')
    VS_TABRIGHT         = (Modifier.MEH,  'k', 'workbench.action.nextEditor')
    VS_CLOSETAB         = (Modifier.MEH,  'l', 'workbench.action.closeActiveEditor')
    VS_GROUP_1          = (Modifier.MEH,  'm', 'workbench.action.focusFirstEditorGroup')
    VS_GROUP_2          = (Modifier.MEH,  'n', 'workbench.action.focusSecondEditorGroup')
    VS_CMT_BLOCK        = (Modifier.MEH,  'o', 'editor.action.blockComment')
    VS_CMT_LINE         = (Modifier.MEH,  'p', 'editor.action.commentLine')
    VS_DEL_LINE         = (Modifier.MEH,  'q', 'editor.action.deleteLines')
    VS_COPYLINEDOWN     = (Modifier.MEH,  'r', 'editor.action.copyLinesDownAction')
    VS_BM_PREV          = (Modifier.MEH,  's', 'bookmarks.jumpToPrevious')
    VS_BM_NEXT          = (Modifier.MEH,  't', 'bookmarks.jumpToNext')
    # meh + u seems to not work well in chromeos
    VS_BM_CLEARALL      = (Modifier.MEH,  'v', 'bookmarks.clearFromAllFiles')
    VS_BM_LIST          = (Modifier.MEH,  'w', 'bookmarks.list')
    VS_DEL_LEFT         = (Modifier.MEH,  '2', 'deleteAllLeft')
    VS_DEL_RIGHT        = (Modifier.MEH,  '3', 'deleteAllRight')
    VS_FIND_FILES       = (Modifier.MEH,  '4', 'workbench.action.findInFiles')
    VS_FILE             = (Modifier.MEH,  '5', 'workbench.action.quickOpen')    
    VS_SYMBOLEDITOR     = (Modifier.MEH,  '6', 'workbench.action.gotoSymbol')
    VS_GO_TO_TOP        = (Modifier.MEH,  '7', 'cursorTop')

    def __init__(self, modifier, keycode, command):
        self.modifier = modifier
        self.keycode = keycode
        self.command = command

# print qmk macro definitions
macros_output_file = os.path.join(base_dir, 'user', 'vscode_macros.h')
f = open(macros_output_file, 'w')
f.write('#pragma once\n')
for map in Mapping:
    macro = map.name
    keycode = map.modifier.name + '(KC_' + map.keycode.upper() + ')'
    command = map.command
    f.write(f'#define {macro.ljust(24)} {keycode.ljust(15)} // {command}\n')
f.close()

# print vscode keyboard shortcuts
shortcut_entries = []
for map in Mapping:
    entry = {
        'key': map.modifier.vscode_shortcut + map.keycode,
        'command': map.command
    }
    shortcut_entries.append(entry)

keybindings_output_file = os.path.join(base_dir, 'keybindings.json')
f = open(keybindings_output_file, 'w')
json.dump(shortcut_entries, f, indent=4)
f.close()