/* Program 4.2 - Drawing a box */
#include <stdio.h>

#define ROWS 5
#define COLS 20

int main(void) {

    /* Print the top border of the box */
    for (int i = 0; i < COLS; i++)
        printf("*");
    printf("\n");

    for (int i = 0; i < ROWS; i++) {
        printf("*");                                /* Print the left border for the row */
        for (int j = 0; j < COLS - 2; j++)
            printf(" ");
        printf("*\n");                              /* Print the right border & new line for the row */
    }

    /* Print the bottom border of the box */
    for (int i = 0; i < COLS; i++)
        printf("*");
    printf("\n");

    return 0;
}
