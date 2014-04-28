/* Exercise 2.1 - Convert inches to yards and feet */
#include <stdio.h>

#define INCHES_PER_FOOT 12U
#define FEET_PER_YARD 3U

int main(void) {
	const unsigned int InchesPerYard = FEET_PER_YARD * INCHES_PER_FOOT;
	
	unsigned long inches = 0UL;							/* Store the inches */
	
	printf("Enter the distance in inches: ");
	scanf("%lu", &inches);
	
	/* Calculate the yards, feet and remaining inches */
	unsigned long yards = inches / (InchesPerYard);
	unsigned long feet = (inches % (InchesPerYard)) / INCHES_PER_FOOT;
	unsigned long remaining_inches = (inches % (InchesPerYard)) % INCHES_PER_FOOT;
		
	printf("%lu inches is %lu yards, %lu feet and %lu inches\n", inches, 
		yards, feet, remaining_inches);
	
	return 0;
}
