``` bash
cd keyboards/splitkb/aurora/lily58/keymaps
qmk compile -km gui                       
```
outputs to /qmk-firmware/

https://github.com/qmk/qmk_firmware/tree/master/keyboards/splitkb/aurora/lily58

```
qmk config user.keyboard=<keyboard_name>
qmk config user.keyboard=splitkb/aurora/lily58/
qmk config user.keymap=<keymap_name>
```


qmk compile -kb <keyboard> -km default
