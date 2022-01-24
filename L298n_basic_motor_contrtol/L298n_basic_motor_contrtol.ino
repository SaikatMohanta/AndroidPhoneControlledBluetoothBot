//motor 1 control pins decleration

const int enA=10;     
const int inPut1=2, inPut2=3;

//motor 2 control pins decleration

const int enB=9;
const int inPut3=4, inPut4=5;

//setup function which runs only once
void setup()
{
          //set all the digital pins as output
          pinMode(enA,OUTPUT);
          pinMode(inPut1,OUTPUT);
          pinMode(inPut2,OUTPUT);

          pinMode(enB,OUTPUT);
          pinMode(inPut3,OUTPUT);
          pinMode(inPut4,OUTPUT);
}

//main function which runs over and over
void loop()
{
   forward();//sets the both motor clockwise with fixed speed
   delay(3000);
      
   
   back();//sets the both motor anti-clockwise with fixed speed
   delay(3000);
     
   
   right();//sets the left motor clockwise and right motor anti-clockwise
   delay(1200);
     
   
   left();//sets the left motor anti-clockwise and right motor clockwise
   delay(1200);
      
   stop();//stops both the motors
   delay(3000);
}


//user defined function one named stop() to stop the bot
void stop()
{         
          analogWrite(enA,0);
          analogWrite(enB,0);

          digitalWrite(inPut1,LOW);
          digitalWrite(inPut2,LOW);

          digitalWrite(inPut3,LOW);
          digitalWrite(inPut4,LOW);
}


//user defined function two named forward() to move the bot to fornt direction
void forward()
{         analogWrite(enA,250);
          digitalWrite(inPut1,LOW);
          digitalWrite(inPut2,HIGH);
          

          analogWrite(enB,250);
          digitalWrite(inPut3,LOW);
          digitalWrite(inPut4,HIGH);
          
}


//user defined function three named back() to move the bot to backward direction
void back()
{         analogWrite(enA,250);
          digitalWrite(inPut1,HIGH);
          digitalWrite(inPut2,LOW);
          

          
          analogWrite(enB,250);
          digitalWrite(inPut3,HIGH);
          digitalWrite(inPut4,LOW);
          
}


//user defined function four named left() to turn the bot to left direction
void left()
{         analogWrite(enA,180);
          digitalWrite(inPut1,LOW);
          digitalWrite(inPut2,HIGH);
          

          analogWrite(enB,180);
          digitalWrite(inPut3,HIGH);
          digitalWrite(inPut4,LOW);
          
}


//user defined function five named right() to turn the bot to right direction
void right()
{         analogWrite(enA,180);
          digitalWrite(inPut1,HIGH);
          digitalWrite(inPut2,LOW);
          

          analogWrite(enB,180);
          digitalWrite(inPut3,LOW);
          digitalWrite(inPut4,HIGH);
          
}
