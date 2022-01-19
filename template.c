#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

task main() {
	nMotorEncoder[leftMotor] = 0;
	while (nMotorEncoder[leftMotor] < 145) {
		motor[rightMotor] = -30;
		motor[leftMotor] = 30;
	}
	motor[leftMotor] = 0;
	while (SensorValue(S1) == 0) {
		motor[rightMotor] = 100;
		motor[leftMotor] = 100;
	}
}
