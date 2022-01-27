#pragma config(StandardModel, "RVW REMBOT")
/**************************************\
|*  ROBOTC Virtual World              *|
|*  Avoiding obstacles with the Sonar *|
\**************************************/

// This program drives forward until the sonarSensor sensor sees an object closer than a
// set 'threshold' variable.  It then backs up and turns right until it sees some space.

//int threshold = 50;   threshold for sonarSensor

void moveForward (int waitTime) {
	  motor[rightMotor] = 75;
    motor[leftMotor]  = 75;
    wait1Msec(waitTime);
}

void pointturnRight (int waitTime) {
	  motor[rightMotor] = -75;
    motor[leftMotor]  = 75;
    wait1Msec(waitTime);
}

void pointturnLeft (int waitTime) {
	  motor[rightMotor] = 75;
    motor[leftMotor]  = -75;
    wait1Msec(waitTime);
}

void pause (int waitTime) {
		motor[rightMotor] = 0;
    motor[leftMotor]  = 0;
    wait1Msec(waitTime);

}

void avoidWall() {
	pause(200);
	while(SensorValue(sonar) > 20) {
		moveForward(400);
	}
	pause(200);

	pointturnRight(250);
}



task main()
{
	displayString(1, "Dominic Diaz");
	displayString(3, "Joshua Wong");
  for (int i = 0; i <= 2; i++) {
  	while(SensorValue(sonar) > 50)
  	{
   	 // go forward at speed 75:
    	moveForward(400);
 		}



   	if (SensorValue(sonar) <= 50)
   	{
     motor[rightMotor] = 0;
     motor[leftMotor]  = 0;
     wait1Msec(150);
     // turn right in place at speed 75:
     pointturnRight(130);

     moveForward(1250);

     pause(200);

     pointturnLeft(140);

     pause(200);

     while(SensorValue(sonar) > 20) {
        motor[rightMotor] = 75;
        motor[leftMotor]  = 75;
      }
     pointturnLeft(120);
     moveForward(900);
     pause(200);
     pointturnRight(120);
     moveForward(900);

     avoidWall();
     avoidWall();



     while(SensorValue(sonar) < 50) {
       motor[leftMotor] = 15;
       motor[rightMotor] = -15;
       wait1Msec(20);
       pause(200);

     }
     moveForward(150);
   	}
  }



}
