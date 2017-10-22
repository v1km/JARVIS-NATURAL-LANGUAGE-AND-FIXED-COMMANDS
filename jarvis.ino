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
#include <Servo.h>
Servo servo;
//Relay 4 channel module
//channe l - FAN relay-pin2
//channe 2 - LIGHT relay-pin3
//channe 3 - TV relay-pin4
//channe 5 - OPEN DOOR pin 9 servo motor
//channe 4 - AC  relay-pin5


String incoming ;

void setup() 
{
  Serial.begin(9600);         
         pinMode(2,OUTPUT);
          pinMode(3,OUTPUT);
           pinMode(4,OUTPUT); 
            pinMode(5,OUTPUT);
            
                servo.attach(9);
}
void loop()
{
  if(Serial.available() > 0)  
  {
    incoming = Serial.read();     
    Serial.print(incoming);        
    Serial.print("\n"); 

    if ( incoming == "Turn on the light"  || "1")
    {
      digitalWrite(3,HIGH);
      
      }
      else if (incoming == "Turn off the light"  || "2")
      {
        digitalWrite(3,LOW);
        }
    
else if(incoming == "Turn on the fan"  || "3")
{
  digitalWrite(2,HIGH);
  }

else if(incoming == "Turn off the fan" ||  "4")
{
  
  digitalWrite(2,LOW);
  }

else if(incoming == "Turn on the TV"  ||  "5")
{
  digitalWrite(4,HIGH);
  
  
  }

else if(incoming == "Turn off the TV"  || "6")
{
  digitalWrite(4,LOW);
  }

else if(incoming == "Turn on the AC" ||  "7" )
{
  digitalWrite(5,HIGH);
  }
  else if(incoming == "Turn off the AC"  || "8")
{
  digitalWrite(5,LOW);
  }

  else if(incoming == "Open the door" || "9" )
{
   servo.write(180);
     delay(3000);
    servo.write(0);
  }
    else if(incoming == "Close the door"  || "0")
{
   servo.write(0);
  }
   

  }
else 
{
  return;
}

}

