/* Program 2.7 -  Division with float values */
#include <stdio.h>

int main(void) {
	float plank_length = 10.0f,						/* In feet */
		piece_count = 4.0f,							/* Number of equal pieces */
		piece_length = 0.0f;						/* Length of a piece in feet */

	piece_length = plank_length / piece_count;

	printf("A plank %.2f feet long can be cut into %.0f pieces of %.2f feet long.\n", 
		plank_length, piece_count, piece_length);

	return 0;
}