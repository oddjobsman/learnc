/* Exercise 3.2 - Program to display readable dates */
#include <stdio.h>

int main(void) {
    unsigned short day = 1, year = 2014;
    enum {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} month = Jan;

    printf("Enter a date (dd/MM/yyyy): ");
    scanf("%hu/%u/%hu", &day, &month, &year);

    if (day < 1 || (month < Jan || month > Dec) || year < 1) {
        printf("Invalid date entered!\n");
        return -1;
    }

    /* Print the day followed by the appropriate suffix */
    printf("You entered: %u", day);
    switch (day % 10) {
        case 1:
            printf("st ");
            break;
        case 2:
            printf("nd ");
            break;
        case 3:
            printf("rd ");
            break;
        default:
            printf("th ");
            break;
    }

    /* Follow it by the month name */
    switch (month) {
        case Jan:
            printf("January ");
            break;
        case Feb:
            printf("February ");
            break;
        case Mar:
            printf("March ");
            break;
        case Apr:
            printf("April ");
            break;
        case May:
            printf("May ");
            break;
        case Jun:
            printf("June ");
            break;
        case Jul:
            printf("July ");
            break;
        case Aug:
            printf("August ");
            break;
        case Sep:
            printf("September ");
            break;
        case Oct:
            printf("October ");
            break;
        case Nov:
            printf("November ");
            break;
        case Dec:
            printf("December ");
            break;
    }

    printf("%u\n", year);

    return 0;
}

