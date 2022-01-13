#pragma platform(NXT)
#pragma DebuggerWindows("nxtLCDScreen")
//very inconsistent 
void forward(int x){
	motor[motorB] = 100;
  motor[motorC]  = 100;
 	displayTextLine(0, "Moving Forward.");
  wait1Msec(x);
}

void left(int x) {
	motor[motorB] = 100;
     motor[motorC] = -100;
     displayTextLine(0, "Turning Left.");
     wait1Msec(x);
}

void right(int x){
	motor[motorB] = -100;
     motor[motorC] = 100;
     displayTextLine(0, "Turning Right.");
     wait1Msec(x);
}

task main() {
    displayCenteredTextLine(3, "I use Arch BTW.");
		right(500);
		displayTextLine(1, "1");
		forward(1000);
		displayTextLine(1, "2");
    left(390);
    displayTextLine(1, "3");
    forward(1700);
    displayTextLine(1, "4");
    left(390);
    displayTextLine(1, "5");
    forward(2000);
    displayTextLine(1, "6");
    right(400);
    displayTextLine(1, "7");
    forward(1400);
    displayTextLine(1, "8");
    right(450);
    displayTextLine(1, "9");
    forward(2250);
    displayTextLine(1, "10");
    left(400);
    displayTextLine(1, "11");
    forward(1100);
    displayTextLine(1, "12");
    left(350);
    displayTextLine(1, "13");
    forward(2000);
    displayTextLine(1, "14");
    right(320);
    displayTextLine(1, "15");
    forward(1000);
}
