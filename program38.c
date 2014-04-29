/* Program 3.8 - Lucky lotteries */
#include <stdio.h>

int main(void) {
    int choice = 0;                     /* Stores the choice */

    /* Get the choice input */
    printf("Pick a number between 1 and 10 and you may win a prize! ");
    scanf("%d", &choice);

    /* default to invalid choice if input is out of range */
    if ((choice > 10) || (choice < 1))
        choice = 11;

    switch (choice) {
        case 7:
            printf("Congratulations!\n");
            printf("You win the collected works of Amos Gruntfuttock.\n");
            break;                      /* Jump to end of block */
        case 2:
            printf("You win the folding thermometer-pen-watch-umbrella.\n");
            break;                      /* Jump to end of block */
        case 8:
            printf("You win a lifetime supply of aspirin tablets.\n");
            break;                      /* Jump to end of block */
        case 11:
            printf("Try between 1 and 10. You wasted your guess!\n");
            /* No break here, just fall-through to the next case */
        default:
            printf("Sorry you lose!\n");
            break;                      /* Jump to end of block. Defensive - in case of new cases */
    }

    return 0;
}
