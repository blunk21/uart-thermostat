# uart-thermostat


***Concept***
T-Bird v2 firmware to simulate a thermostat that can be configured via UART. 
The board simulates a thermostat with four rooms, and since there is only one temperature sensor
temperature of the other 3 rooms are random pseudo-temperatures.

The firmware is intended to be used with it's own GUI application _uart-thermostat-gui_, 
which provides a front end for the configuration.

***Usage***
The program uses _make_ for building and flashing. 
Simply type ```make flash`` to compile and flash the source code, once the board is connected,
then type ```make clean``` to get rid of the remaining files.

