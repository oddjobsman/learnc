/* Exercise 2.4 - Program to calculate the average pay per hour */
#include <stdio.h>
#include <math.h>

int main(void) {
    double weekly_pay = 0.0;
    printf("Enter the pay you recieve per week in dollars: ");
    scanf("%lf", &weekly_pay);

    unsigned int hours_worked = 0u;
    printf("Enter the number of hours you work: ");
    scanf("%u", &hours_worked);

    /* Calculate average pay */
    double average_pay = weekly_pay / hours_worked;

    /* Calculate dollars and cents */
    unsigned long avg_dollars = round(average_pay);
    unsigned long avg_cents = round((average_pay - (double)avg_dollars) * 100);

    printf("You get paid $%lu dollars and %lu cents for %u hours in a week\n", 
        avg_dollars, avg_cents, hours_worked);

    return 0;
}
