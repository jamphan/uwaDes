/* ----------------------------------------------------------------------------
 * Sensors
 * ----------------------------------------------------------------------------
	0. Sensor theory
	1. Implementation of Interfaces
	2. API functions
	3. API usage examples
*/

/* ----------------------------------------------------------------------------
 * 0. Sensor Theory
 * ----------------------------------------------------------------------------*/
/*

	DIGITAL SENSORS
		* Has a rise time?

*//* ----------------------------------------------------------------------------
 * 1. Implementation of Interfaces
 * ----------------------------------------------------------------------------*/

//-------------------------------------
//EXAMPLE PSD Sensor (digital)
/*
	* out1 = VIN into PSD
	* in1 = output from PSD
*/
int psd() {
	int results = 0;

	//If PSD output (in1) == 0; !in1 == 1
	//I.e. Check for sensor readout every 100us 
	while (!in1) {
		//Wait for line to rise in us
		usleep(100);//microSecs
	}

	//Pump out the results
	//compose output data from incoming sequential bits
	//8 bits
	for (int i = 0; i < 8; i++) {
		out1 = 1;//rising edge
		usleep(200);//microSecs

		out1 = 0;//falling edge
		result = 2*result + in1; //results = (results<<1) | in1;
		usleep(200;)//microSecs
	}

	return result;
}
        
/* ----------------------------------------------------------------------------
 * 2. API Functions
 * ----------------------------------------------------------------------------*/
 #include <eyebot.h>

//Delivers actual timestamp or distance (mm) measured by the selected PSD (int psd)
// psd = 1: front senor
// psd = 2: left sensor
int PSDGet(int psd)

//Returns the RAW sensor reading measure by selected PSD (int psd)
//apparently returns in mm??
//Just use this one??
//Read in Front sensor before Left sensor
int PSDGetRaw(int psd)

/* ----------------------------------------------------------------------------
 * 3. API Usage Examples
 * ----------------------------------------------------------------------------*/
 int sensorRead = PSDGetRaw(2);