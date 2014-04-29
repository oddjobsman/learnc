/* Program 3.4 - Converting uppercase to lowercase */
#include <stdio.h>

int main(void) {
    char letter = 0;                /* Stores our character */

    printf("Enter an uppercase letter: ");
    scanf("%c", &letter);           /* Read a character */

    if (letter >= 'A') {
        if (letter <= 'Z') {
            letter = letter - 'A' + 'a';
            printf("You entered an uppercase '%c'\n", letter);
        } else
            printf("Try using the shift key! I want a capital letter.\n");
    }

    return 0;
}
