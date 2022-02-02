
#pragma config(Sensor, S1,     touchSensor,    sensorTouch)
#pragma config(Sensor, S2,     ultrasonicSensor, sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)

#pragma platform(NXT)
#pragma DebuggerWindows("nxtLCDScreen")
task main() {
    displayCenteredTextLine(3, "ROBO 500"); {
        while(true) {
            if (SensorValue (touchSensor) == 0) {
                motor[rightMotor] = 100;
                motor[leftmotor] = 100;
                displayTextLine(0, "Going forward...");
            }
            else {
                motor[motorB] = -100;
                motor[motorC]  = -100;
                wait1Msec(250);
                motor[motorB] = -100
                motor[motorC] = 100
                displayTextLine(0, "Going in reverse...");
                wait1Msec(512);
            }
        }
    }

}
