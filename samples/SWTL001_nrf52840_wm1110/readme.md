# [SWTL001](https://github.com/Lora-net/SWTL001) firmware update for LR11xx
use this platform for SWTL001 firmware update for LR11xx chip, as alternative to NUCLEO-L476RG.

# build steps
1 download your desired [firmware header file](https://github.com/Lora-net/radio_firmware_images) and place into include subdirectory.   Only "transceiver" firmware will work with sidewalk; do not use "modem" firmware.  
2 edit ``application_thread.c`` to include this downloaded header file  
3 build with `` west build -b nrf52840_wm1110 -- -DRADIO=LR1110``  
4 have open serial terminal to observe logs, (or RTT viewer) to see logs  
5 ``west flash``  
6 check in the execution logs the firmware update completed, then flash another application.  If you are going to ise a GNSS application, then you first need perform a full almanac update in order to GNSS to function  correctly.  
