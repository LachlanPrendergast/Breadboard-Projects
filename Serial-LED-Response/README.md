This is my most basic Arduino Uno project, consisting of a simple LED setup ( Pin 13 -> 220 Ohm Resistor -> Led anode, GND -> LED Cathode).

The functionality of this project is that every time the host sends a message (in the form of a singular byte) to the Arduno via Serial (9600 Baud),
The Uno will return each byte received via Serial and the LED will flash on and off once.

Wiring Diagram:

!(./assets/wiring-diagram.png)
