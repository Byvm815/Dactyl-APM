## Configure for APM32 & STM32
MCU_LDSCRIPT = STM32F103xB_uf2boot## 128K flash
FIRMWARE_FORMAT = uf2
BOARD = STM32_F103_STM32DUINO
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE ## Enter lower-power sleep mode when on the ChibiOS idle thread

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
#SPLIT_TRANSPORT = serial_usart

## Extra include
#SRC += *.c


## Build Options
#LTO_ENABLE = yes           ## Link Time Optimization, And smaller sise
NKRO_ENABLE = no            ## Enable N-Key Rollover
BOOTMAGIC_ENABLE = no       ## Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       ## Mouse keys
EXTRAKEY_ENABLE = yes       ## Audio control and System control
CONSOLE_ENABLE = no         ## Console for debug
COMMAND_ENABLE = yes        ## Commands for debug and configuration
BACKLIGHT_ENABLE = no       ## Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no		## Enable keyboard RGB underglow
AUDIO_ENABLE = no           ## Audio output
#RAW_ENABLE = yes           ## Enables HID RAW communication between the board and the PC
#ENCODER_ENABLE = yes   
#KEYBOARD_SHARED_EP = yes
#STENO_ENABLE = no			## stenography
