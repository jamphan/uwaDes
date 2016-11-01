//Motor Control Notes
#include <eyebot.h>
#include <stdio.h>

//-----------------------------------------------------------------------------
//Timer functions

//adds a function to a 1 1Khz/scale timer. i.e executes fct every 1ms*scale
//example: OSAttachTimer(1000/freq, &onOffController); //freq in Hz
TIMER OSAttachTimer(int scale, void(*)void fct);

//-----------------------------------------------------------------------------
//motor control
//Gives an encoder value from the specified encored, motorNo (1-4)
//The difference in encoding divided by the sampling frequency should give 
//motor velocity
int ENCODERead( int motorNo ){}
	encode = ENCODERead(motorNo);
	if (encode == 1) {
		printf("Error: motor\n");
	}

//Set the motor, specified by motorNo (1-4), to run at speed specified by motorSpeed
//motorSpeed is given in absolute values [-100, +100]
//returns error?
int MOTORDriveRaw( int motorNo, int motorSpeed ){}
	err = MOTORDriveRaw(motorNo, motorSpeedRaw);
	if(err){
		printf("Error: motor\n");
	}

//Similar to MOTORDriveRaw, however takes input as a relative percentage measure of speed
//returns error?
int MOTORDrive ( int motorNo, int motorSpeedRel ){}

/* ----------------------------------------------------------------------------
 * Directional Control
 * ----------------------------------------------------------------------------*/

//Drives straight
// dist = distance to travel (mm)
// lin_speed = the speed to travel at (mm/s)
//returns 0 on success and 1 on error
int VWStraight(int dist, int lin_speed){}



