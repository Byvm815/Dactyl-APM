Use openOCD to flash ***4x6v6/引导-Bootloard/uf2boot.bin*** , basic addr is 0x08000000

I'm using DAP-Link.

The way of link:

*DAP-Link*  ->  *APM32 Board*
TCK/CK      ->  SCK

GND         ->  GND

TMD/IO      ->  DIO

3V3         ->  3V3

Flash command
'''
sudo openocd -f interface/cmsis-dap.cfg -f target/stm32f1x.cfg -c "init;halt;reset halt;flash write_image erase uf2boot.bin 0x08000000;shutdown;"
'''