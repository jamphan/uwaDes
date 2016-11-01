/* ----------------------------------------------------------------------------
 * image processing notes
 * ----------------------------------------------------------------------------*/
/*


*//* ----------------------------------------------------------------------------
 * DATA TYPES
 * ----------------------------------------------------------------------------*/
/*
	int COLOR[3*pixels]
		* array
		* each pixel has 3 values: r, g, b <-- in that order
		* E.g.
			COLOR example = [ 125 0 240 32 36 25  76 .. ];
							   ^  ^  ^   ^  ^  ^  ^
							   |__|__|   |__|__|  |____ 'r' value of pixel 3
							      |			|
							   Pixel 1   Pixel 2

		* Iterating example (note that we init 'px' to zero!)
		for (int px = 0; px < N_PIXELS; px++) {
			col[3*i]     = rBit;
			col[3*i + 1] = gBit;
			col[3*i + 2] = bBit;
		}
*/
