# STM32F103_GT911_Conf_Writer

Simple program to write the configuration of a GT911 touch panel.

Output is via USB. Under linux it will identify it self as /dev/ttyUSB*

The connections for the panel are on pin PB10 SCL PB11 SDA

It waits untill a key is pressed and will then write the configuration from register 0x8047 until 0x8100

Programming STM32F103C8T6 bluepill with ST-Link v2

openocd -f STM32F103C8T6.cfg -c init -c targets -c halt -c "flash write_image erase f103_i2c_tp_conf_writer.elf" -c "verify_image f103_i2c_tp_conf_writer.elf"