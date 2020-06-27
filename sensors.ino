/*
  simulate the output of 15 sensors to serial monitor.

 Demonstrate the output of 15 sensors to log to the CVS file format. 

 This sketch prints a random number as a placeholder to mimic the output 
 of sensor values to the serial monitor. 
 
 * by Hamdi A. Ahmed

 */

// include the library code:


void setup() {
  
  Serial.begin(9600);
 Serial.println("Date & Time, Humidity %, Temprature *C, SE3 %, SE4 %, SE5 %, SE6 %, SE7 %, SE8 %, SE9 %, SE10, SE11 %, SE12 %, SE13 %, SE14 %, SE15 %");

}

void loop() {
  
  float SE1 = random(1.0,100.0); // consider sensor 1
  float SE2 = random(2.0,100.0); // consider sensor 2 
  float SE3 = random(3.0,100.0); // consider sensor 3
  float SE4 = random(4.0,100.0); // consider sensor 4
  float SE5 = random(5.0,100.0); // consider sensor 5
  
  float SE6 = random(6.0,100.0); // consider sensor 6
  float SE7 = random(7.0,100.0); // consider sensor 7
  float SE8 = random(8.0,100.0); // consider sensor 8
  float SE9 = random(9.0,100.0); // consider sensor 9
  float SE10 = random(10.0,100.0); // consider sensor 10
  
  float SE11 = random(11.0,100.0); // consider sensor 11
  float SE12 = random(12.0,100.0); // consider sensor 12 
  float SE13 = random(13.0,100.0); // consider sensor 13
  float SE14 = random(14.0,100.0); // consider sensor 14
  float SE15 = random(15.0,100.0); // consider sensor 15
  
  

  Serial.print(","); //this comma is for date and time we will assign from Tera term sotware 

  Serial.print(SE1); // e.g. 1. consider as ouput of  humidity
  Serial.print(",");
  Serial.print(SE2); // e.g. 2. Temprature etc. 
  Serial.print(","); 
  Serial.print(SE3);
  Serial.print(","); 
  Serial.print(SE4); 
  Serial.print(","); 
  Serial.print(SE5);
  Serial.print(",");
  
  Serial.print(SE6); 
  Serial.print(",");
  Serial.print(SE7); 
  Serial.print(","); 
  Serial.print(SE8);
  Serial.print(","); 
  Serial.print(SE9); 
  Serial.print(","); 
  Serial.print(SE10);
  Serial.print(",");
  
  Serial.print(SE11); 
  Serial.print(",");
  Serial.print(SE12); 
  Serial.print(","); 
  Serial.print(SE13);
  Serial.print(","); 
  Serial.print(SE14); 
  Serial.print(","); 
  Serial.println(SE15);  // the last line should have to include "println" .... 

  
}
 