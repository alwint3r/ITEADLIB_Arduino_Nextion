@mainpage Home Page

# Nextion

--------------------------------------------------------------------------------

# Introduction

Nextion Arduino library provides an easy-to-use way to manipulate Nextion serial
displays. Users can use the libarry freely, either in commerical projects or
open-source prjects,  without any additional condiitons.

For more information about the Nextion display project, please visit
[the wiki。](http://wiki.iteadstudio.com/Nextion_HMI_Solution)
The wiki provdies all the necessary technical documnets, quick start guide,
tutorials, demos, as well as some useful resources.

To get your Nextion display, please visit
[iMall.](http://imall.itead.cc/display/nextion.html)

To discuss the project?  Request new features?  Report a BUG? please visit the
[Forums](http://support.iteadstudio.com/discussions/1000058038)

# Documentation

Offline Documentation's entry `doc/Documentation/index.html` shiped with source code
can be open in your browser such as Chrome, Firefox or any one you like.

# Suppported Mainboards

**All boards, which has one or more hardware serial, can be supported.**

For example:

  - Iteaduino MEGA2560
  - Iteaduino UNO
  - Arduino MEGA2560
  - Arduino UNO
  - Nano32 (Theoretically, all ESP32-based boards should be supported)

# Configuration

Most of Nextion hardware communicates with serial using 9600 as baudrate. So, you have to initialize the serial object with that baudrate.

# UNO-like Mainboards

If your board has only one hardware serial, such as UNO, you should disable
dbSerial and redirect nexSerial to Serial(Refer to section:`Serial configuration`).

# Example Usage

```arduino
#include "Arduino.h"
#include "HardwareSerial.h"
#include "Nextion.h"

HardwareSerial nextionSerial(1);
NexHardware nextion(&nextionSerial, &Serial);
NexButton btn(&nextion, 0, 1, "b0");
NexTouch* nex_listen_list[] = {
  &btn,
  NULL,
};

void btn0PopCallback(void *ptr) {
  Serial.println("Button 0 is touched");
}

void setup() {
  Serial.begin(115200);
  nextionSerial.begin(9600, SERIAL_8N1);

  if (!nextion.nexInit()) {
    Serial.println("Failed to initialize Nextion Hardware");
  }

  btn.attachPop(btn0PopCallback, &btn);
}

void loop() {
  nextion.nexLoop(nex_listen_list);
}

```

# Useful Links

<http://blog.iteadstudio.com/nextion-tutorial-based-on-nextion-arduino-library/>

# License

-------------------------------------------------------------------------------


    The MIT License (MIT)

    Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


-------------------------------------------------------------------------------
