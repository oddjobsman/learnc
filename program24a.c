/* Program 2.4 - Simple calculations */
#include <stdio.h>

int main(void) {
	/* Declare and set the number of each kind of pet */
	int cats = 2,
		dogs = 1,
		ponies = 1,
		others = 46;
	
	/* Calculate the total number of pets */
	int total_pets = cats + dogs + ponies + others;
	
	printf("We have %d pets in total\n", total_pets);
	
	return 0;
}