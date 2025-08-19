#include <LiquidCrystal.h>
const int pin0 = 0;
const int pin1 = 1;
const int pin2 = 2;
const int pin3 = 3;
const int pin4 = 4;
const int pin5 = 5;
const int pin6 = A0;
const int pin7 = A1;
const int pin8 = A2;
const int pin9 = A3;
const int pin10 = A4;
const int pin11 = A5;
const int led=7,led2=8,led3=9,led4=10, led5=11;

void setup() {



pinMode(pin0,OUTPUT);
pinMode(pin1,OUTPUT);
pinMode(pin2,INPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,INPUT);
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,INPUT);
pinMode(pin9,OUTPUT);
pinMode(pin10,OUTPUT);
pinMode(pin11,INPUT);
digitalWrite(pin0,HIGH);
digitalWrite(pin1,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin6,LOW);
digitalWrite(pin7,HIGH);
digitalWrite(pin9,LOW);
digitalWrite(pin10,LOW);
}
  
void loop()
{
//OR GATE
if(digitalRead(pin2)==HIGH)
{  
        
  
  if(digitalRead(pin5)==HIGH)
  {
    
    if(digitalRead(pin8)==HIGH)
    {
      if(digitalRead(pin11)==LOW)
      {
digitalWrite(led, LOW); //if gate is in, light is off
digitalWrite(led2, HIGH); //Truth table values
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
        
      }
    }
  }
}
//And gate
if(digitalRead(pin2)==HIGH)
{  
        
  
  if(digitalRead(pin5)==LOW)
  {
    
    if(digitalRead(pin8)==LOW)
    {
      if(digitalRead(pin11)==LOW)
      {
        digitalWrite(led, LOW); //if gate is in, light is off
		digitalWrite(led2, LOW); // AND gate truth table outputs are 0, 0, 0, 1 which is how the LEDs are set up
		digitalWrite(led3, LOW);
		digitalWrite(led4, HIGH);
		digitalWrite(led5, HIGH);
      }
    }
  }
}

//EX-NOR  
if(digitalRead(pin2)==LOW)
{  
        
    if(digitalRead(pin5)==HIGH)
  {
    
    if(digitalRead(pin8)==HIGH)
    {
      if(digitalRead(pin11)==LOW)
      {
digitalWrite(led, HIGH); //if gate is in, light is off
digitalWrite(led2, LOW); //Truth table values
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
        
      }
    }
  }
} 
  
//NAND GATE
  if(digitalRead(pin2)==LOW)
{  
        
  
  if(digitalRead(pin5)==HIGH)
  {
    
    if(digitalRead(pin8)==HIGH)
    {
      if(digitalRead(pin11)==HIGH)
      {
        digitalWrite(led, HIGH); //if gate is in, light is off
digitalWrite(led2, HIGH); //Truth table values
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
        
      }
    }
  }
}
}
