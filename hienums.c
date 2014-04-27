/* Hi Enums - Play with enumerations */
#include <stdio.h>

int main(void) {
    /* define a new enumeration for days in a week */
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Thursday;              /* today is a variable that holds a weekday */

    /* define an enum for months in year with January being 1 along with last, current and next month variables */
    enum Months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} last_month = Mar, 
        current_month = last_month + 1,
        next_month = current_month + 1;

    /* define an unnamed enum and a variable */
    enum {red, orange, yellow, green, blue, indigo, violet} color;

    color = indigo;                             /* set the color */

    /* add 2 days to today */
    today = today + 2;

    printf("Today is %d\n", today);
    printf("Last Month was %d, current month is %d and next month is %d\n", 
        last_month, current_month, next_month);
    printf("The selected color is: %d\n", color);

    return 0;
}
