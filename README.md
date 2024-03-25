# First-Atmega328P-code
In this repo, I will be focusing on coding the Atmega328P microcontroller that is found on the Arduino Uno dev board. 

In the first document you will find a breadboard version of the microcontroller used with some simple sensors. I will also include a pcb design that I designed that is cheaper to design and produce.

# *Breadboard Design*

I will still be using the Arduino IDE to code.
But I will use the original arduino board(with or without the microntroller) to send data from the USB.
You can use a USB to TTL converter such as the FTDI, having in mind that your bootloader is already installed in the microntroller.
I am using the ATMEGA328p-PU which has the bootloader already installed, therefore if I do use a USB to TTL conveter I wont have to install the bootloader. I suggest you use the ATMEGA328p-PU microcontroller.
I have included a list of components used amd a schematics diagram to follow allong as you do your connections.
I have also included a blink LED code and another code of an implemented PIR sensor.

# *PCB Design*

I have deigned the PCB on Altium Designer. I have simplified the original Arduino Uno design to a low cost simple board. 
