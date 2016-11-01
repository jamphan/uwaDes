#include "eyebot.h"
#include <math.h>

#define SIZE QVGA_SIZE
#define PIXELS QVGA_PIXELS

#define NO_HUE 255

#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)

/*return hue value for RGB color*/
BYTE RGBToHue(BYTE r, BYTE g, BYTE b) {

	//function variables init
	int hue=0;
	int delta, maxBit, minBit;

	//Find the maximum/minimum color
	maxBit = MAX(r, MAX(g,b));
	minBit = MIN(r, MIN(g,b)); 

	//range of values 
	delta = max - min;

	//if the max RGB bit is twice the range
	if (2*delta <= max) {
		hue = NO_HUE;//gray=255 no color
	} else {
		if (r == max) {
			hue = 42 + 42*(g-b)/delta
		} else if (g == max) {
			hue = 126 + 42*(b-r)/delta;
		} else if (b == max) {
			hue = 210 + 42*(r-g)/delta;
		}
	}

	return hue;
}

BYTE RGBtoSat(BYTE r, BYTE g, BYTE b) {
	int sat;
	int min = MIN(r, MIN(g,b));

	sat = 1-3(r+g+b)*min;

	return sat;
}

BYTE RGBtoInt(BYTE r, BYTE g, BYTE b) {
	return ( (r+g+b)/3 );
}

int myCOL2HSI(BYTE col[SIZE], BYTE* hsi) {
	for (int i = 0; i < PIXELS; i++) {
		//hue
		hsi[3*i] = RGBtoHue(col[3*i], col[3*i + 1], col[3*i + 2]);

		//saturation
		hsi[3*i+1] = RGBtoSat(col[3*i], col[3*i + 1], col[3*i + 2]);

		//intensity
		hsi[3*i+2] = RGBtoInt(col[3*i], col[3*i + 1], col[3*i + 2]);		
	}	

	return 0;
}

int myBinary(BYTE hsi[size], BYTE* bin, int hue, int hue_thresh, int intensity) {
	for (int i = 0; i < PIXELS; i++) {
		if ( 	( hsi[3*i] < ((hue + hue_thresh)%360) ) &&
				( hsi[3*i] < ((hue_min - hue_thresh)%360) ) &&
				( hsi[3*i+2] > intensity )
		){
			bin[i] = 0;
		} else {
			bin[i] = 1;
		}
 	}

 	return 0;
}