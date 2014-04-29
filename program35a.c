/* Program 3.5a - Uppercase letter using library functions */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char letter = 0;

    printf("Enter an uppercase letter: ");
    scanf("%c", &letter);

    if (isalpha(letter) && isupper(letter))
        printf("You entered an upper-case '%c'\n", tolower(letter));
    else
        printf("You did not enter an uppercase letter!\n");

    return 0;
}
