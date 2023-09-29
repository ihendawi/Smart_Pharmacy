#include <AccelStepper.h>
#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo; 

const byte limitSwitch1 = 12;
const byte limitSwitchRound = 11;
SoftwareSerial myserial(9,10);

AccelStepper stepperX(1, 2,5);
AccelStepper stepperY(1, 3,6);



void home()
{
  while (digitalRead(limitSwitch1) == HIGH)
  {
    stepperX.setSpeed(99);
    stepperY.setSpeed(99);

//
 stepperY.moveTo(-80000); 
stepperY.runSpeed();

    stepperY.setCurrentPosition(0);
  }
  while (digitalRead(limitSwitchRound) == HIGH)
  {
  stepperX.setSpeed(99);
  stepperY.setSpeed(99);

 
  stepperX.moveTo(-80000); 
stepperX.runSpeed();

    stepperX.setCurrentPosition(0);
  }
}




void setup()
{ 
  myservo.attach(13); 
  myservo.write(180);


pinMode(limitSwitch1, INPUT_PULLUP);
pinMode(limitSwitchRound, INPUT_PULLUP);


   
  myserial.begin(9600);
  Serial.begin(9600);
  Serial.println("Stepper Test");
  myserial.write("Stepper Test in bluetooth");
  stepperX.setMaxSpeed(888);
  stepperY.setMaxSpeed(888);
  stepperX.setAcceleration(20000.0);
  stepperY.setAcceleration(20000.0);
   home();

}




void loop()
{

if (Serial.available() > 0 || myserial.available()>0)
  {

   //byte var = Serial.read();
   byte var = myserial.read();
switch (var) 


{
  //1
  case 'a':
  stepperX.moveTo(50); 
  stepperX.runToPosition();
  stepperY.moveTo(50); 
  stepperY.runToPosition();
  
  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);
  
  stepperX.moveTo(500);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(0);
  stepperX.runToPosition();

  break;





  //2  
  case 'b':
  stepperX.moveTo(500); 
  stepperX.runToPosition();
  stepperY.moveTo(50); 
  stepperY.runToPosition();

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(1000);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(500);
  stepperX.runToPosition();
  
  break;
    



  //3  
  case 'c':
  stepperX.moveTo(950); 
  stepperX.runToPosition();
  stepperY.moveTo(50); 
  stepperY.runToPosition(); 

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(500);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(950);
  stepperX.runToPosition();
  break;



  //4
  case 'd':
  stepperX.moveTo(1350); 
  stepperX.runToPosition();
  stepperY.moveTo(0); 
  stepperY.runToPosition();

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(950);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(1350);
  stepperX.runToPosition();
  break;
    
  //5
  case 'e':
  stepperX.moveTo(50); 
  stepperX.runToPosition();
  stepperY.moveTo(3000); 
  stepperY.runToPosition();

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(500);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(50);
  stepperX.runToPosition();
  
  break;
  break;

  //6
  case 'f':
  stepperX.moveTo(500); 
  stepperX.runToPosition();
  stepperY.moveTo(3000); 
  stepperY.runToPosition();

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(1000);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(500);
  stepperX.runToPosition();
  break;

  //7
  case 'g':
  stepperX.moveTo(950); 
  stepperX.runToPosition();
  stepperY.moveTo(3000); 
  stepperY.runToPosition();


  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(500);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(950);
  stepperX.runToPosition();
  break;


  //8
  case 'h':
    stepperX.moveTo(1350); 
    stepperX.runToPosition();
    stepperY.moveTo(3000); 
    stepperY.runToPosition(); 

    myservo.write(0);
    delay(300);
    myservo.write(180);
    delay(500);

    stepperX.moveTo(950);
    stepperX.runToPosition();
    delay(500);
    stepperX.moveTo(1350);
    stepperX.runToPosition();
  break;


  //9
  case 'i':
    stepperX.moveTo(50); 
    stepperX.runToPosition();
    stepperY.moveTo(5800); 
    stepperY.runToPosition(); 

    myservo.write(0);
    delay(300);
    myservo.write(180);
    delay(500);
  
    stepperX.moveTo(500);
    stepperX.runToPosition();
    delay(500);
    stepperX.moveTo(0);
    stepperX.runToPosition();

  break;


  //10
  case 'j':
    stepperX.moveTo(500); 
    stepperX.runToPosition();
    stepperY.moveTo(5800); 
    stepperY.runToPosition();

    myservo.write(0);
    delay(300);
    myservo.write(180);
    delay(500);

    stepperX.moveTo(1000);
    stepperX.runToPosition();
    delay(500);
    stepperX.moveTo(500);
    stepperX.runToPosition();
  
  break;



  //11
  case 'k':
  stepperX.moveTo(950); 
  stepperX.runToPosition();
  stepperY.moveTo(5800); 
  stepperY.runToPosition(); 

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(500);
  stepperX.runToPosition();
  delay(500);
  stepperX.moveTo(950);
  stepperX.runToPosition();
  break;


  //12
  case 'l':
  stepperX.moveTo(1350); 
  stepperX.runToPosition();
  stepperY.moveTo(5800); 
  stepperY.runToPosition(); 

  myservo.write(0);
  delay(300);
  myservo.write(180);
  delay(500);

  stepperX.moveTo(950);
  stepperX.runToPosition(); 
  delay(500);
  stepperX.moveTo(1350);
  stepperX.runToPosition();
  break;
}

}
}
