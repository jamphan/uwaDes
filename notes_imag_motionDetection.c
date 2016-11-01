/* ----------------------------------------------------------------------------
 * Motion Detection
 * ----------------------------------------------------------------------------*/
        
//-----------------------------------------------------------------------------
int motion(VGAgray im1, VGAgray im2, int threshold) {
	VGAgray diff;
	int avg;

	//Get the ABS difference between two images (of the same place)
	difference(im1, im2, diff);

	//Determine the average of all pixels
	avg = average(diff);

	//If the average is greater than the threshold specified we have movement
	return (avg > threshold);
}