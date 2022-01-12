#pragma platform(NXT)
#pragma DebuggerWindows("nxtLCDScreen")
task main() {
    displayCenteredTextLine(3, "I use Arch BTW.");
    for(int repeats = 0; repeats <= 8; repeats++) {

        motor[motorB] = 100;
        motor[motorC]  = 100;
        displayTextLine(0, "Moving Forward.");
        wait1Msec(2100);

        motor[motorB] = -100;
        motor[motorC] = 100;
        displayTextLine(0, "Turning Right.");
        wait1Msec(386);
    }
}
