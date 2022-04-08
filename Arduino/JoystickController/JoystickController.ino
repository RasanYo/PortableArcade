/*
* This file will be the arduino controller for the
* joystick and buttons input
* it will communicate the inputs to the Raspberry Pi via USS
* @Author Clément Husler
*/


#define vrX 0
#define vrY 0
#define SW 0



void setup(){
    Serial.begin(9600); 
    pinMode(VRx, INPUT);
    pinMode(VRy, INPUT);
    pinMode(SW, INPUT_PULLUP); 
}


void loop(){
    xPos = analogRead(vrX);
    yPos = analogRead(vrY);
    SW_state = digitalRead(SW);
    mapX = map(xPos, 0, 1023, -512, 512);
    mapY = map(yPos, 0, 1023, -512, 512);
}
