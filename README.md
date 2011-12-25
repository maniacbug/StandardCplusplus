# Standard C++ for Arduino

## What is this?

This is a straight port of [uClibc++](http://cxx.uclibc.org/) for Arduino.
I have cut nothing out and held nothing back.  Use with care!

That said, I have used uClibc++'s own internal configuration to pare back
un-needed stuff, like support for floats, gratuitous template 
instantiations and other things.  See system\_configuration.h for all of
those gory details.

Plus I added in [Andy Brown's](http://andybrown.me.uk/ws/2011/01/15/the-standard-template-library-stl-for-avr-with-c-streams/#IDComment246044033)
excellent ohserialstream class for managing the HardwareSerial as an ostream.

## How do I install it?

This is installed just like a regular Arduino library.  Unpack the contents
of the distribution into the 'libraries' folder under your sketchbook.  For
example, my sketchbook is at /home/maniacbug/Source/Arduino, so this
library is in /home/maniacbug/Source/Arduino/libraries/StandardCplusplus .

Be sure to reset your Arduino IDE after installing it.

## How do I try it out?

From the Arduino IDE, navigate the menus to:
File > Examples > StandardCplusplus > string\_vector

Upload that, set your serial monitor to 57600 baud, and check the output.

## How do I learn more?

The web is your friend.  [cplusplus.com](http://cplusplus.com/reference/) is my personal favorite reference.

## Which versions does it work with?

Arduino 1.0 and beyond.

## What is the license?

uClibc++ is LGPL, so this port is also.  Andy's <serstream> file is actually
CC-BY-SA, however he indicated he'd be releasing it using the 3-clause
modified BSD license, so it will be fully compatible with uClibc++.
