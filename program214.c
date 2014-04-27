/* Program 2.14 - Choosing the correct type for the job 2 */
#include <stdio.h>

int main(void) {
    const float Revenue_Per_150 = 4.5f;

    short JanSold = 23500;                      /* Stock sold in January */
    short FebSold = 19300;                      /* Stock sold in February */
    short MarSold = 21600;                      /* Stock sold in March */
    float RevQuarter = 0.0f;                    /* Sales for the quarter */

    /* Calculate quarterly total */
    unsigned long QuarterSold = JanSold + FebSold + MarSold;

    /* Output monthly sales and total for the quarter */
    printf("Stock sold in\nJan: %d\nFeb: %d\nMar: %d\n", JanSold, FebSold, MarSold);
    printf("Total stock sold in quarter: %ld\n", QuarterSold);

    RevQuarter = QuarterSold / 150.0f * Revenue_Per_150;
    printf("Sales revenue this quarter: $%.2f\n", RevQuarter);

    return 0;
}
