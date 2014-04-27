/* trig.c - sampling some of the trignometric functions */
#include <math.h>
#include <stdio.h>

int main(void) {
    double angle = 45.0,                    /* Angle in degrees */
        pi = 3.14159265,
        sine = sin(pi * angle / 180.0),     /* Angle converted to radians */
        cosine = cos(pi * angle / 180.0);   /* Angle converted to radians */

    printf("The angle is: %.2f\n", angle);
    printf("The sine is: %.2f\n", sine);
    printf("The cosine is: %.2f\n", cosine);

    return 0;
}
