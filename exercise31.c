/* Exercise 3.1-1 - Program to convert temperatures from one unit to another */
#include <stdio.h>

int main(void) {
    enum {C2F = 1, F2C = 2} choice = C2F;

    printf("Select type of conversion:\n");
    printf("1. Celsius to Farenheit\n2. Farenheit to Celsius\n");
    printf("Your selection: ");
    scanf("%d", &choice);

    /* Ensure user's selection is valid, else quit */
    if (choice > F2C || choice < C2F) {
        printf("Invalid selection: %d\n", choice);
        return -1;
    }

    /* Get the input for the temperature value */
    double temp = 0.0;
    printf("Enter the %s temperature: ", (choice == C2F ? "Celsius" : "Farenheit"));
    scanf("%lf", &temp);

    /* Perform the appropriate conversion and output the value */
    switch (choice) {
        case C2F:
            printf("%.2f degrees Celsius -> %.2f degrees Farenheit\n", temp,
                ((temp * 1.8) + 32.0));
            break;
        case F2C:
            printf("%.2f degrees Farenheit -> %.2f degrees Celsius\n", temp,
                ((temp - 32) * (5.0 / 9.0)));
            break;
    }

    return 0;
}
