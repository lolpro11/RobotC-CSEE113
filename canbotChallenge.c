#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

task main()
{
	//displayString(1, "Dominic Diaz");
    displayString(1, "Andrew Cini");
	displayString(3, "Joshua Wong");
    displayString(5, "Abraham Orea");

	motor[motorC] = 100;
	motor[motorB] = 100;
	motor[motorA] = -50;
	wait1Msec(1500);

	motor[motorC] = 25;
	motor[motorB] = 0;
	wait1Msec(400);

	motor[motorC] = 0;
	motor[motorB] = 0;
	wait1Msec(400);

	motor[motorA] = 50;
	wait1Msec(100);

  nMotorEncoder[motorC] = 0;
  while(nMotorEncoder[motorC] < 500) {
  	motor[motorC] = 100;
  	motor[motorB] = -100;
  }

	motor[motorC] = 100;
	motor[motorB] = 100;
	wait1Msec(1400);

}
