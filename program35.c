/* Program 3.5 - Testing letters the easy way */
#include <stdio.h>

int main(void) {
    char letter = 0;

    printf("Enter an uppercase letter: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z') {
        letter += 'a' - 'A';
        printf("You entered an upper-case '%c'\n", letter);
    } else
        printf("You did not enter an uppercase letter!\n");

    return 0;
}
