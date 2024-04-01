# Atmega328P

In this repo, I will be focusing on coding the Atmega328P microcontroller that is found on the Arduino Uno dev board. 
In the first document, you will find a breadboard version of the microcontroller used with some simple sensors. I will also include a PCB design that I designed that is cheaper to design and produce.

# *Breadboard Design*
I will still be using the Arduino IDE to code. I will use the original Arduino Uno board (with or without the microcontroller) to send the code from the USB through the board to the breadboard via the RX and TX lines.You can use a USB to TTL converter such as the FTDI, keeping in mind that your bootloader is already installed in the microcontroller. Most ATmega328ps do not have a bootloader installed.I am using the ATMEGA328p-PU, which has the bootloader already installed; therefore, if I do use a USB to TTL converter, I won't have to install the bootloader. I, therefore, suggest you use the ATMEGA328p-PU microcontroller.I have included a list of components used and a schematic diagram to follow along as you make your connections.I have also included a blink LED code and another code for an implemented PIR sensor.

# *PCB Design*
I designed the PCB on Altium Designer. I have simplified the original Arduino Uno design to a simple, low-cost board. The board has connectors that are designated for communication protocols, analog I/O pins, and digital I/O pins. It is an enhanced, easy-to-use, and very beginner-friendly Arduino UNO board. The board uses a USB micro connector for data transfer, which uses CP2101, a USB-to-UART bridge converter to transmit code to the ATmega328. CP2101 has an inbuilt voltage regulator that outputs 3.3V, which I later use to power my ATmega328P. I have a 5V power supply included that I tap from the USB input and smoothen using a ferrite bead.
The PCB includes a reset button and a blink LED for testing.
