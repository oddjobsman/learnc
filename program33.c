/* Program 3.3 - Analyzing numbers */
#include <stdio.h>
#include <limits.h>

int main(void) {
    long test = 0L;                     /* stores the number to be checked */

    printf("Enter a number less than %ld: ", LONG_MAX);
    scanf("%ld", &test);

    if (test % 2 == 0L) {
        printf("The number %ld is even!\n", test);

        if ((test / 2L) % 2 == 0L) {
            printf("Half of %ld is also even.\n", test);
            printf("That's interesting isn't it?\n");
        }
    } else
        printf("The number %ld is odd\n", test);

    return 0;
}
