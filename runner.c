#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

/*************************************\
|*  Programmer: Mr. Sep              *|
|*  Class     : Intro to Robotic Eng *|
|*  Term      : Spring 2022          *|
|*                                   *|
|*  Task      : Line Runner Level 1  *|
|*  Robot     : Buggy (CSEE) Bot     *|
\*************************************/

void driveStraight(int powerLevel)
{
	motor[rightMotor] = powerLevel;
	motor[leftMotor]  = powerLevel;
}

void turnRight90()
{
	nMotorEncoder[leftMotor] = 0;
	while (nMotorEncoder[leftMotor] < 146)
	{
		motor[rightMotor] = -50;
		motor[leftMotor]  = 50;
	}
	motor[leftMotor] = 0;
}

task main()
{
	string botName = "Buggy (CSEE) Bot";
	int fullStop = 0;
	int lineCount = 0;
	bool foundBlack = false;

	displayTextLine(2, "%s", botName);

	while (true)
	{
		if (SensorValue(touchSensor) == 0)
		{
			driveStraight(30);
		}
		else
		{
			driveStraight(-50);
			wait1Msec(500);
			turnRight90();
		}

		// red is 27
    if (SensorValue(lightSensor) < 30)
      foundBlack = true;

    if (foundBlack && SensorValue(lightSensor) >= 28)
    {
      foundBlack = false;
      lineCount++;
    }

    displayTextLine(5, "     line#: %d", lineCount);

    if (lineCount == 1)
    {
  		driveStraight(100);
  		break; // exit the current loop
  	}
	}
}
