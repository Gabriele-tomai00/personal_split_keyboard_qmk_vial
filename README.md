# Firmware for my personal slit keyboard (inspired from UHK)

## Steps
1) Move this git repository to kekboards repository of QMK
2) use the command: 
    `qmk compile -kb gabriele -km default` or directly `qmk flash -kb gabriele -km default` (you need a Rasberry Pi Pico linked and in flash mode)




<!-- *A short description of the keyboard/project*

* Keyboard Maintainer: [Gabriele](https://github.com/Gabriele-tomai00)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make gabriele:default

Flashing example for this keyboard:

    make gabriele:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available -->
