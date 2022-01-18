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
	right(230);
	displayTextLine(1, "1");
	forward(1650);
	left(375);

	forward(1000);
	left(100);
	forward(1300);
	right(450);

	forward(1000);
	right(190);
	forward(800);
	right(20);
	forward(500);
	left(350);
	forward(800);
	left(350);

	forward(2400);
	right(400);
	forward(1000);
}
