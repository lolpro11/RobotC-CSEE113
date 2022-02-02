#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

/*************************************\
|*  Name: Abraham Orea               *|
|*  Robot: Buggy Bot                 *|
\*************************************/

void driveStraight(int powerLevel)
{
	motor[rightMotor] = powerLevel;
	motor[leftMotor]  = powerLevel;
}
void turnRight90()
{
	nMotorEncoder[leftMotor] = 0;
	while (nMotorEncoder[leftMotor] < 143)
	{
		motor[rightMotor] = -50;
		motor[leftMotor]  = 75;
	}
	motor[leftMotor] = 0;
}
task main()
{
	//int fullPower = 100;
	//int halfPower = 50;

	turnRight90();

	while (true)
	{
		if (SensorValue(touchSensor) == 0)
		{
			driveStraight(100);
		}
		else
		{
			driveStraight(-100);
			wait1Msec(500);
			turnRight90();
		}
	}
}
