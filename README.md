# AndroidPhoneControlledBluetoothBot
#Learn how to build a prototype of a two wheel bot which can be controlled through an android app available in play store.
##COMPONENTS REQUIRED:
HC05 BLUETOOTH MODULE
ARDUINO DEV BOARD
12V BATTTERY PACK
L298N DUAL MOTOR DRIVER
DC GEARED MOTOR or DC MOTOR
CHASIS FOR THE BOT
LEDs
BUZZER
ANDROID PHONE

##BLETOOTH MODULE CONNECTIONS:
HC05         -> ARDUINO
TXD          -> RX0
RXD          -> TX1
VCC          -> 5V
GND          -> GND
*PLEASE DISCONNECT THE TXD & RXD BEFORE UPLOADING THE CODE TO THE MCU.
*OTHERWISE THE CODE WILL NOT UPLOAD.
*AFTER UPLOADING CONNECT THE TX1 & RX0 TO THE HC05 MODULE'S RXD & TXD. 
LINK FOR THE ANDROID APP: https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller&hl=en_IN&gl=US

##MOTOR DRIVER CONNECTIONS:
MOTOR DRIVER -> ARDUINO
ENA          -> D10
IN1          -> D2
IN2          -> D3
ENB          -> D9
IN3          -> D4
IN4          -> D5
+12V         -> 12V BATTERY PACK +(VE) TERMINAL
GND          -> GND
+5V          -> TO ARDUINO AND HC05 +(5V)PIN
