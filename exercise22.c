/* Exercise 2.2 - Calculate area of a room with length and width provided */
#include <stdio.h>

#define INCHES_PER_FOOT 12U
#define FEET_PER_YARD 3.0

int main(void) {
    const double InchesPerYard = FEET_PER_YARD * INCHES_PER_FOOT;
    const double InchesPerSquareYard = InchesPerYard * InchesPerYard;

    unsigned long feet = 0UL, inches = 0UL;                     /* Store the feet and inches */

    /* Request the length of the room in feet and inches */
    printf("Enter the length of the room in feet: ");
    scanf("%lu", &feet);
    printf("        ... and in inches: ");
    scanf("%lu", &inches);

    unsigned long length = feet * INCHES_PER_FOOT + inches;

    /* Request the width of the room in feet and inches */
    printf("Enter the width of the room in feet: ");
    scanf("%lu", &feet);
    printf("        ... and in inches: ");
    scanf("%lu", &inches);

    unsigned long width = feet * INCHES_PER_FOOT + inches;

    /* Calculate the area of the room in inches */
    double area_of_room = (length * width) / InchesPerSquareYard;                

    printf("The are of room is: %.2f square yards.\n", area_of_room);

    return 0;
}
