task main() {
    displayCenteredBigTextLine(3, "I use Arch BTW.");  
    for(int repeats = 0; repeats <= 8; repeats++) {
    
        motor[motorB] = 100;        
        motor[motorC]  = 100;
        displayCenteredBigTextLine(3, "Moving Forward.");
        wait1Msec(1980);
        
        motor[motorB] = 0;
        motor[motorC] = 100;
        displayCenteredBigTextLine(3, "Turning Right.");
        wait1Msec(850);
    }                                                           
}   
