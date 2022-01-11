task main() {
    wait1Msec(1000);
    motor[rightMotor] = 100;
    motor[leftMotor]  = 100;
    wait1Msec(3000) ;

	motor[rightMotor] = 100;
	motor[leftMotor]  = 0;
	wait1Msec(950);

	motor[rightMotor] = 100;
	motor[leftMotor]  = 100;
	wait1Msec(3000);

    motor[rightMotor] = 0;
	motor[leftMotor]  = 0;
	wait1Msec(1000);

	motor[rightMotor] = 0;
	motor[leftMotor]  = 100;
	wait1Msec(800);

	motor[rightMotor] = 100;
	motor[leftMotor]  = 100;
	wait1Msec(1000);

	motor[rightMotor] =0;
	motor[leftMotor]  =100;
	wait1Msec(860);

	motor[rightMotor]=100;
	motor[leftMotor] =100;
	wait1Msec(1000);
}
