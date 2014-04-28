/* Exercise 2.1 - Convert inches to yards and feet */
#include <stdio.h>

int main(void) {
	const unsigned int InchesPerFoot = 12U;
	const unsigned int FeetPerYard = 3U;
	const unsigned int InchesPerYard = FeetPerYard * InchesPerFoot;
	
	unsigned long inches = 0UL;							/* Store the inches */
	
	printf("Enter the distance in inches: ");
	scanf("%lu", &inches);
	
	/* Calculate the yards, feet and remaining inches */
	unsigned long yards = inches / (InchesPerYard);
	unsigned long feet = (inches % (InchesPerYard)) / InchesPerFoot;
	unsigned long remaining_inches = (inches % (InchesPerYard)) % InchesPerFoot;
		
	printf("%lu inches is %lu yards, %lu feet and %lu inches", inches, 
		yards, feet, remaining_inches);
	
	return 0;
}