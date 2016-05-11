# Rotary Encoder with Arduino

A simple PCB design to easily use a rotary encoder with a breadboard. 

![](https://raw.githubusercontent.com/jerwil/Rotary_Encoder_Arduino/master/Media/Board%20Top%20BB.jpg)

I've always found it inconvenient to try to fit a rotary encoder on a breadboard and find and use the correct resistors every time. I love rotary encoders, and I have used them in several projects such as [The Sleep Sensei](https://github.com/jerwil/SleepSensei), a [Valentine's Day gift](https://github.com/jerwil/Count_Up_Time), and the [Theremax](https://github.com/mddub/theremax/).

## The Board

![](https://raw.githubusercontent.com/jerwil/Rotary_Encoder_Arduino/master/Media/Rotary%20Encoder%20Mini%20Board_pcb.png)

![](https://raw.githubusercontent.com/jerwil/Rotary_Encoder_Arduino/a20db75cfaca0f7ad9eaeb3cce93a661d216ef76/Media/Bare%20Board.jpg)

The PCB is pseudo two-layer as the rotary encoder is soldered on the top of the board.

![](https://raw.githubusercontent.com/jerwil/Rotary_Encoder_Arduino/master/Media/Board%20Top.jpg)

![](https://raw.githubusercontent.com/jerwil/Rotary_Encoder_Arduino/master/Media/Board%20Bottom.jpg)


## Arduino Code

The attached code is a simple "hello world" for the rotary encoder. It will print "Clockwise" or "Counter Clockwise" to the serial monitor for each twist of the knob, and it will adjust the brightness of an LED.