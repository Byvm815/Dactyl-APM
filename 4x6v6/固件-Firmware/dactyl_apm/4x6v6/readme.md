This project test in vial-qmk version: ee7f5acefb3fa3e69b1dd2ef325ede1698bef1c9

***STM32F103xB_uf2boot.ld*** file copy from https://github.com/qmk/qmk_firmware/tree/master/platforms/chibios/boards/common/ld

Copy ***4x6v6/固件-Firmware/dactyl_apm*** to ***vial-qmk/keyboards***

Build in qmk:
```
qmk setup -H ~/Git/vial-qmk

qmk flash -kb dactyl_apm/4x6v6 -km vial -bl uf2-split-right

qmk flash -kb dactyl_apm/4x6v6 -km vial -bl uf2-split-left
```

Or build in make(pkgs:gnumake,python3,gcc-arm-embedded-8):
```
make dactyl_apm/4x6v6:vial:uf2-split-right

make dactyl_apm/4x6v6:vial:uf2-split-left
```