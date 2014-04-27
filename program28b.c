/* Program 2.8b - Calculations on a table using const to define PI */
#include <stdio.h>

int main(void) {
	float radius = 0.0f,						/* The radius of the table */
		diameter = 0.0f,						/* The diameter of the table */
		circumference = 0.0f,					/* The circumference of the table */
		area = 0.0f;							/* The area of the table */

    const float Pi = 3.14159265f;               /* Defining the constant Pi */

	printf("Input the diameter of the table:");
	scanf("%f", &diameter);						/* Read the diameter from the keyboard */

	radius = diameter / 2.0f;					/* Calculate the radius */
	circumference = 2.0f * Pi * radius;			/* Calculate the circumference */
	area = Pi * radius * radius;				/* Calculate the area */

	printf("The circumference is %.2f\n", circumference);
	printf("The area is %.2f\n", area);

	return 0;
}
