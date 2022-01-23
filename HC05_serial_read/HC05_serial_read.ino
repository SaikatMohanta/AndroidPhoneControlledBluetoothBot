char i;                     //Declearing a character type global variable named "i"

//the setup function which runs only once after powering the uCU
void setup()
{
  Serial.begin(9600);       //Set up the serial communication (baud) rate at 9600 bits per second
}

//The main function which runs repeatedly over and over  
void loop()
{
  //The Serial. available( ) function in Arduino gets the stored bytes from the serial port that are available for reading. 
  //It is the data, which is already stored and arrived in the serial buffer.
  if(Serial.available())   //If there is serial data available in the buffer
  {
    i = Serial.read();     //Store the received serial data into the variable named "i"
    Serial.println(i);     //print the serial data on the serial monitor
  }

  else                     //If there is no serial data available in the buffer
  {
    Serial.println("!Nothing Received!");   //print a message
  }
   
}
