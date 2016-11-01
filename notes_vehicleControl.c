/* ----------------------------------------------------------------------------
 * Vehicle Control
 * ----------------------------------------------------------------------------*/


/* ----------------------------------------------------------------------------
 * API Functions
 * ----------------------------------------------------------------------------*/
        
//All VW* commands 
//returns 0 on success and 1 on error

//Drives straight
// dist = distance to travel (mm)
// lin_speed = the speed to travel at (mm/s)

int VWStraight(int dist, int lin_speed){}
	if (err = VWStraight(10, 10)) {
		printf("Error: VWStraight\n");
	}

//Turns the vehicle on the spot
//angle in radians*100 (314 = 180\degrees)
//ang_speed the speed to turn the angle (rad/100)/s
int VWTurn(int angle, int ang_speed){}
	if (err = VWStraight(10, 10)) {
		printf("Error: VWTurn\n");
	}

//Turns the vehicle in a circle
// dist = radial distance in mm
// angle = angle to rotate in (Radians*100)
// lin_speed = speed to rotate (mm/s)
int VWCurve(int dist, int angle, int lin_speed){}
	if (err = VWStraight(10, 10)) {
		printf("Error: VWCurve\n");
	}


//Blocks until drive is complete
int VWDriveWait
	if (err = VWStraight(10, 10)) {
		printf("Error: VWDriveWait\n");
	}
