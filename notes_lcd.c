//LCD Control notes
//-----------------------------------------------------------------------------
//LCD control

//Set the text cursor position to (row, col). always returns 0
int LCDSetPos(int row, int col)

//print formatted string to LCD and refresh LCD. Cursor position is updated. always returns 0
int LCDPrintf(const char * format, ...)

//clear the LCD display and all display buffers (turn it black). always return 0
int LCDClear(void)


//-------------------------------------
//Example usage of the LED

//init LCD
LCDSetPos(10, 10); //set cursor to 10,10

//program variables
int encoderReading,
int lcdcount = 0;

//event loop
while(1) {

	char *encodingDisplay;

	//Get sensor value
	encoderReading = ENCODERead(motorNo);

	//format sensor reading to string and then print
	err = asprintf(&encodingDisplay, "%d", encoderReading);
	if (err == -1) {
		//memory allocation error!
	}

	LCDPrintf("Encoder Value: %s", encodingDisplay);
	lcdcount++;

	//clear screen if we are printing too many lines
	if(lcdcount>10) {
		LCDClear();
		lcdcount=0;
	}

	//Note that asprintf allocates memory for our pointed address
	//Hence we must free this!
	//note that we create an uninitialized pointer, but aspinrtf
	//we allocate memory for it!
	free(encodingDisplay)

}

