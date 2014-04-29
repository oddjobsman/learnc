/* Program 3.9 - Testing cases */
#include <stdio.h>

int main(void) {
    char answer = 0;                    /* Stores the answer char */

    printf("Enter Y or N: ");
    scanf("%c", &answer);

    switch (answer) {
        case 'y': case 'Y':
            printf("Your answer was in the affirmative.\n");
            break;
        case 'n': case 'N':
            printf("Your answer was in the negative.\n");
            break;
        default:
            printf("You did not respond correctly...\n");
            break;
    }

    return 0;
}
