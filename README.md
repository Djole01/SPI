# SPI
using an Arduino as a slave to Raspberry pi, for the purpose of testing SPI interfacing.

Arduino has a default SPI slave mode of 0, so that's why the Raspberry Pi is also synchronized to mode 0, by using the wiringPiSPIsetupMode function.
wiringPiSPIDataRW() function is the only wiringPi function that sends data over SPI.
