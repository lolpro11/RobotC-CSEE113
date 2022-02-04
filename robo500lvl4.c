#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

task main()
{
    for(int repeats = 0; repeats <= 8; repeats++) {
		if (SensorValue(lightSensor) > 20) {
            displayTextLine(2, "Moving Forward...");
            motor[motorC] = 100;
            motor[motorB] = 100;
            wait1Msec(1900);
		}
		else {
            motor[motorC] = 100;
            motor[motorB] = 100;
            wait1Msec(200);
            displayTextLine(2, "Turning Right");
            motor[motorC] = -100;
            motor[motorB] = -100;
            wait1Msec(1000);
		}
	}
}
