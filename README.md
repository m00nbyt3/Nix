# Nix
Nix is an RF DeBrujin sequence code transmitter, working on EvilCrowRF (https://github.com/joelsernamoreno/EvilCrow-RF by @joelsernamoreno).

A de Bruijn sequence is a circular (cyclic) arrangement of symbols from a given alphabet where every possible subsequence of a fixed length n appears as a contiguous substring exactly once.

This allows the EvilCrowRF to send a bunch of fixed codes much faster, reducing the needed time for sending them in a bunch.

The firmware allows you to send different de Brujin sequences in a simple but curated web interface.

## Installation

Install esptool: sudo apt install esptool
Install pyserial: sudo pip install pyserial
Download and install the latest version of Arduino IDE (v2.3.6): https://www.arduino.cc/en/main/software
Download EvilCrow-RF repository: git clone https://github.com/joelsernamoreno/EvilCrow-RF.git
Download the ESPAsyncWebServer library in the Arduino library directory: git clone https://github.com/ESP32Async/ESPAsyncWebServer.git
Download the ElegantOTA library in the Arduino library directory: git clone https://github.com/ayushsharma82/ElegantOTA.git
Edit ElegantOTA/src/ElegantOTA.h and change the following:

#define ELEGANTOTA_USE_ASYNC_WEBSERVER 0 to #define ELEGANTOTA_USE_ASYNC_WEBSERVER 1

Download the AsyncTCP library in the Arduino library directory: git clone https://github.com/ESP32Async/AsyncTCP.git \
Open Arduino IDE \
Go to File - Preferences. Locate the field "Additional Board Manager URLs:" \
Add "https://espressif.github.io/arduino-esp32/package_esp32_index.json" without quotes. \
Click "Ok" \
Select Tools - Board - Boards Manager. Search for "esp32". Install "esp32 by Espressif system version 3.3.2". Click "Close". \
Open nix.ino sketch and sites.h \
Select Tools: \
    Board - "ESP32 Dev Module". \
    Flash Size - "4MB (32Mb)". \
    CPU Frequency - "80MHz (WiFi/BT)". \
    Flash Frequency - "40MHz" \
    Flash Mode - "DIO" \
Upload the code to the Evil Crow RF device \
Press reset button
