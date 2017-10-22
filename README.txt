Components:
arduino uno or any other board 
arduino cable
hc 05 bluetooth module
5v relay  4 channel 
jumper wires
Bulb or any other ac device to be controlled.
Wires
5v power source external



Arduino - Servo
5v        red wire
gnd       black/brown wire
9         Signal pin



arduino   -   hc 05 connection
rx-pin0        tx pin
tx-pin1        rx pin
gnd             gnd
5v              vcc

Set baudrate of arduino to 9600

arduino   -    5v 4 channel relay module
gnd             gnd
Vin             vcc
pin2            IN1
pin3            IN2
pin4           IN3
pin5           IN4

//Commands:
//Turn on the light
//Turn off the light
//Turn on the fan
//Turn off the fan
//Turn on the Tv
//Turn off the Tv
//Turn on the AC
//Turn off the AC
//Open the door
//Close the door
Note:connect 5v external to power jack of arduino uno board.do not connect 5v of arduio to relays.

Set baudrate of arduino as 9600 in serial monitor.

On the next side of relay module connect the ac connections.
On the ac connection there are two wires ,one is live wire and other is neutral power.
Leave the live wire with the light  connection as it is.(live wire is on right side of plug)
First test the relay module properly by using arduino.
The neutral wire should have two points. One point of neutral source from mains and other of light.connect  the  module's coil  pin to Ac Neutral and light pin 
to NO pin of module

Proceed the same procedure for all 3 connections of modules respectively.
Use any android device with app installed in it.
1. First pair with bluetooth module in mobile
2. Open the app
3. tap on bluetooth text and click on your paired device.
4. Above text , if connected is printed then tap on microphone and speak your command to do with your jarvis
5. If isnt then check your bluetooth module.

Connect any 5v charger to arduino external power up the arduino


Connect the kob of servo motor such that if it rotates 180 degrees the door is opened and closed when it rotates back to 0 degrees.
Use a bigger Servo Motor if your servo motor do not have enough torque to pull the pin of the Door.
For reference,refer image attached.



if any query mail me on vikasmali1498@hotmail.com       