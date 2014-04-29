/* Program 3.7 - A confused recruiting policy */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age = 0;                        /* Age of the applicant */
    int college = 0;                    /* Code for college attended */
    int subject = 0;                    /* Code for subject studied */
    bool interview = false;             /* true for accept, false for reject */

    printf("What college? 1 for Harvard, 2 for Yale, 3 for other: ");
    scanf("%d", &college);
    printf("What subject? 1 for Chemistry, 2 for Economics, 3 for other: ");
    scanf("%d", &subject);
    printf("How old is the applicant? ");
    scanf("%d", &age);

    /* Checkout the applicant */
    if ((age > 25 && subject == 1) && (college == 3 || college == 1))
        interview = true;
    if (college == 2 && subject == 1)
        interview = true;
    if (college == 1 && subject == 2 && !(age > 28))
        interview = true;
    if (college == 2 && (subject == 2 || subject == 3) && age > 25)
        interview = true;

    if (interview)
        printf("\nGive 'em an interview!\n");
    else
        printf("\nReject 'em!\n");

    return 0;
}
