#/usr/bin/expect

set timeout 100
spawn picocom -b 57600 /dev/ttyUSB0
expect "+OK"
