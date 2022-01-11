task main() {
    displayCenteredBigTextLine(3, "I use Arch BTW.");  
    for(int repeats = 0; repeats <= 8; repeats++) {
    
        // Moves forward for 2 seconds
        motor[motorB] = 100;        
        motor[motorC]  = 100;        
        wait1Msec(1980);
        
        motor[motorB] = 0;
        motor[motorC] = 100;
        wait1Msec(850);
    
    
    }                                                           
}   
