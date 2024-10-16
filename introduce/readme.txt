I. Regarding the links for the three newly added boards:
1.nrf52840_wm1110(Dev Kit for AWS Sidewalk)：https://www.seeedstudio.com/LPWAN-Asset-Tracker-Dev-kit-WM1110-p-5846.html
2.wio_tracker_1110(Wio-WM1110 Tracker Module)：https://www.seeedstudio.com/Wio-Tracker-1110-Dev-Board-p-5799.html
3.wio_wm1110(Wio-WM1110 Dev Kit)：https://www.seeedstudio.com/Wio-WM1110-Dev-Kit-p-5677.html

II.  The corresponding projects:
1.nrf52840_wm1110: SWTL001_nrf52840_wm1110,lbm_sid_nrf52840_wm1110,sid_nrf52840_wm1110
2.wio_tracker_1110: SWTL001_wio_tracker,lbm_sid_wio_tracker,sid_wio_tracker
3.wio_wm1110: SWTL001_wio_wm1110,lbm_sid_wio_wm1110,sid_wio_wm1110

III. The corresponding log output
1.nrf52840_wm1110: USB Type-C (115200)
2.wio_tracker_1110: Grove Digital 2 (115200,30->UART_RX,31->UART_TX)
3.wio_wm1110: Grove UART(115200,TXD,RXD)

IV. Regarding the differences of the Wio_tracker_1110 board:
1.There is no hardware difference between nrf52840_wm1110 and wio_tracker_1110, the difference lies in the software;
2.nrf52840_wm1110 must first use the attached AWS bootloader for flashing. Subsequent firmware updates only require dragging the new app's UF2 firmware when the device is in bootloader mode, 
	making it convenient for developers who do not want to use a JLink programmer;( The UF2 file name is configured with the name corresponding to CONFIG_KERNEL_BIN_NAME.)
3.wio_tracker_1110 does not require an additional bootloader flash. It runs with MCUboot + app.

V. Regarding the AWS Key flashing device address:
1.It corresponds to the mfg_storage area under each project.
2.nrf52840_wm1110: 
	mfg_storage:
	address: 0xd0000
	end_address: 0xd1000
	region: flash_primary
	size: 0x1000
		There are two ways to update the AWS key:
			1.Convert the AWS key to a UF2 file: use the utility tool provided in the appendix, which includes instructions on how to run the script to generate it.
			2.Directly flash the AWS key's hex file into the mfg area.
3.wio_tracker_1110:
	mfg_storage:
	address: 0xff000
	end_address: 0x100000
	region: flash_primary
	size: 0x1000

4.wio_wm1110:
	mfg_storage:
	address: 0xff000
	end_address: 0x100000
	region: flash_primary
	size: 0x1000

VI.  Regarding testing:
Under each project, there is a corresponding readme.md file that explains how to compile the corresponding firmware.
1.nrf52840_wm1110: 
	a. You must first use JLink to flash the attached bootloader file. This allows future app upgrades by simply double-clicking the reset button to enter bootloader mode and then dragging the UF2 firmware for upgrading. 
	b. You must first use the UF2 file compiled from the SWTL001_nrf52840_wm1110 project to upgrade the app on the device and ensure it is running, which will update the LR1110 to version v401. You can check the USB logs. 
	c. For the lbm_sid_nrf52840_wm1110 and sid_nrf52840_wm1110 projects, follow the instructions under each project. Both generate UF2 firmware that can be dragged and flashed for upgrading.
2.wio_tracker_1110: 
	a. All projects are flashed using JLink. 
	b. First, use the firmware compiled from the SWTL001_wio_tracker project to flash the device and update the LR1110 to version v401. You can check the logs using the Digital2 corresponding serial port pin. 
	c. For the lbm_sid_wio_tracker and sid_wio_tracker projects, follow the instructions under each project. After compiling the firmware, flash it using JLink.
3.wio_wm1110: 
	a. All projects are flashed using JLink. 
	b. First, use the firmware compiled from the SWTL001_wio_wm1110 project to flash the device and update the LR1110 to version v401. You can check the logs using the Serial Port Grove corresponding serial port pin. 
	c. For the lbm_sid_wio_wm1110 and sid_wio_wm1110 projects, follow the instructions under each project. After compiling the firmware, flash it using JLink.













