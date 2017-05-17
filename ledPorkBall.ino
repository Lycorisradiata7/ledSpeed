const int analogPin=A0;
const int ledCount=10;
const int speed=50;
int ledPins[]={2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
      for(int thisLed=0;thisLed<ledCount;thisLed++){
        pinMode(ledPins[thisLed],OUTPUT);
        }
}

void loop() {
  // put your main code here, to run repeatedly:
      int sensorReading=analogRead(analogPin);
      int ledLevel=map(sensorReading,0,1023,0,ledCount);
      for(int thisLed=0;thisLed<10;thisLed++){
           
          if(thisLed!=5)
          {
            digitalWrite(ledPins[thisLed],HIGH);
            digitalWrite(ledPins[thisLed-1],LOW);
            digitalWrite(ledPins[9-thisLed],HIGH);
            digitalWrite(ledPins[(9-thisLed)+1],LOW);
           delay(speed+thisLed*10);
          }
          if(thisLed==9){ 
            digitalWrite(ledPins[thisLed],LOW);
            digitalWrite(ledPins[9-thisLed],LOW);
        }
        }

       

           
       
  
}
