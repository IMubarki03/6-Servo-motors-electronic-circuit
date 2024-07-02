
#include <Servo.h> //  bring the Servo hobby library

Servo myservo1;  // create 6 servo objects to control the 6 servo motors
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
// We will create six Servo motors as the board capacity is six PWM digital pins

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(3);  // attaches each servo on each pin to the servo objects
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
  myservo5.attach(10);
  myservo6.attach(11); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);  // tell each servo to go to position in variable 'pos'
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(15);                       // waits 15 ms for each servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
     // in steps of -1 degree
    myservo1.write(pos);  // tell each servo to go to position in variable 'pos'
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(15);                       // waits 15 ms for each servo to reach the position
  }
}
