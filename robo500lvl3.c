#pragma config(StandardModel, "RVW REMBOT")

/**************************************\
|*  Name: Abraham Orea                *|
|*  Robot: Buggy Bot                  *|
\**************************************/

//int threshold = 20;

task main()
{
  while(true)
  {
    motor[rightMotor] = 100;
    motor[leftMotor]  = 100;


    if(SensorValue(sonar) < 20 && SensorValue(sonar) != NULL)
    {
      motor[rightMotor] = -75;
      motor[leftMotor]  = 75;
      wait1Msec(1000);


      while(SensorValue(sonar) < 40)
      {
        motor[rightMotor] = -75;
        motor[leftMotor]  = 75;
      }
    }
  }
}
