/* Program 2.17 - Calculating the height of the tree */
#include <stdio.h>

int main(void) {
    long shorty = 0L,                               /* Shorty's height in inches */
        lofty = 0L,                                 /* Lofty's height in inches */
        feet = 0L,
        inches = 0L,
        shorty_to_lofty = 0L,                       /* Distance from Shorty to Lofty in inches */
        lofty_to_tree = 0L,                         /* Distance from Lofty to tree in inches */
        tree_height = 0L;                           /* Tree height in inches */

    const long inches_per_foot = 12L;

    /* Get Lofty's height */
    printf("Enter Lofty's height to the top of his/her head, in whole feet: ");
    scanf("%ld", &feet);
    printf("            ...and then inches: ");
    scanf("%ld", &inches);

    lofty = feet * inches_per_foot + inches;

    /* Get Shorty's height upto his/her eyes */
    printf("Enter Shorty's height to the top of his/her eyes, in whole feet: ");
    scanf("%ld", &feet);
    printf("            ...and then inches: ");
    scanf("%ld", &inches);

    shorty = feet * inches_per_foot + inches;

    /* Get the distance between Shorty and Lofty */
    printf("Enter the distance between Shorty and Lofty, in whole feet: ");
    scanf("%ld", &feet);
    printf("            ...and then inches: ");
    scanf("%ld", &inches);

    shorty_to_lofty = feet * inches_per_foot + inches;

    /* Get the distance from Lofty to the tree */
    printf("Enter the distance from Lofty to the tree to the nearest foot: ");
    scanf("%ld", &feet);

    lofty_to_tree = feet * inches_per_foot;

    /* Calculate tree height */
    tree_height = shorty + (shorty_to_lofty + lofty_to_tree) * (lofty - shorty) / shorty_to_lofty;

    printf("The height of the tree is %ld feet and %ld inches.\n", tree_height / inches_per_foot, 
        tree_height % inches_per_foot);

    return 0;
}
