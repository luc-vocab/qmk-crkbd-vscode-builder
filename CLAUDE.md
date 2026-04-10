# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What This Is

A build system for QMK keyboard firmware (Corne/crkbd and ZSA Voyager) that uses Docker containers to avoid polluting the host system with QMK build dependencies. Its key feature is **unified VSCode macro generation**: you define a VSCode command + keyboard position once in `scripts/process_mapping.py`, and it generates both the QMK header (`user/vscode_macros.h`) and VSCode `keybindings.json` automatically.

## Build Commands

All builds run inside Docker. Each script runs `process_mapping.py` first, then compiles firmware in a container, then syncs output to Dropbox via rclone.

```bash
# Corne rev1 (original, produces .hex)
scripts/docker_qmk_build.sh            # build firmware
scripts/docker_qmk_build.sh rebuild    # rebuild Docker image first, then build

# Corne rev4.1 (produces .uf2)
scripts/docker_qmk_crkbd_v41_build.sh
scripts/docker_qmk_crkbd_v41_build.sh rebuild

# ZSA Voyager (produces .bin)
scripts/docker_qmk_zsa_build.sh
scripts/docker_qmk_zsa_build.sh rebuild
```

Firmware output goes to `~/code/keyboard/firmware/{crkbd,crkbd_v41,voyager}/` (configured in `scripts/directories.sh`).

To tag a stable release: `scripts/snap_stable_firmware.sh <VERSION>` (e.g. `20251107-3`).

## Architecture

### VSCode Mapping Pipeline (`scripts/process_mapping.py`)

The `Mapping` enum defines entries as `(Modifier, key, vscode_command)`. Modifiers are `MEH` (Ctrl+Shift+Alt) or `HYPR` (Ctrl+Shift+Alt+Meta). The script generates:
- `user/vscode_macros.h` -- QMK `#define` macros (e.g. `#define VS_COMMANDS MEH(KC_B)`)
- `keybindings.json` -- VSCode keybinding entries

This file is the single source of truth for all VSCode keyboard shortcuts. Both generated files are derived outputs.

### Keymap Structure

Three keyboard targets share a common `user/` directory:
- `keymap/` -- Corne rev1 keymap
- `keymap_crkbd_v41/` -- Corne rev4.1 keymap
- `keymap_voyager/` -- ZSA Voyager keymap

Each contains `keymap.c`, `config.h`, and `rules.mk`. The shared `user/` directory provides:
- `dvorak_42_key.{c,h}` -- main keymap logic, layer definitions, custom keycodes, and shortcut macros (tmux, shell, browser, terminal)
- `keymap_*.h` -- per-layer layout definitions (base, keynav, keysel, desknav, appnav, symbols, mouse, game)
- `vscode_macros.h` -- generated VSCode macros (do not edit manually)
- `glcdfont.c` -- OLED font data

### Layers (defined in `user/dvorak_42_key.h`)

BASE, KEYNAV, KEYSEL, DESKNAV, BROWSER, SHELL, TMUX, VSCODE, MOUSE, SYMBOLS, GAME, GAME_NUMPAD

### Docker Images

Each target has its own Dockerfile pulling from a specific QMK fork/tag:
- `Dockerfile` -- upstream QMK for crkbd rev1
- `Dockerfile.crkbd_v41` -- foostan's kbd_firmware for crkbd rev4
- `Dockerfile.zsa_qmk` -- ZSA's QMK fork for Voyager
