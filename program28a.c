/* Program 2.8a - Calculations on a table using #define to define PI */
#include <stdio.h>

#define PI 3.14159265f							/* Definition of PI symbol */

int main(void) {
	float radius = 0.0f,						/* The radius of the table */
		diameter = 0.0f,						/* The diameter of the table */
		circumference = 0.0f,					/* The circumference of the table */
		area = 0.0f;							/* The area of the table */

	printf("Input the diameter of the table:");
	scanf("%f", &diameter);						/* Read the diameter from the keyboard */

	radius = diameter / 2.0f;					/* Calculate the radius */
	circumference = 2.0f * PI * radius;			/* Calculate the circumference */
	area = PI * radius * radius;				/* Calculate the area */

	printf("The circumference is %.2f\n", circumference);
	printf("The area is %.2f\n", area);

	return 0;
}