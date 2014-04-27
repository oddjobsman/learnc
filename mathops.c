/* Mathematical operations - playing around with math operations */
#include <math.h>
#include <stdio.h>

int main(void) {
    double x = 2.25;

    double less = floor(x);                 /* Result is 2.0 */
    double more = ceil(x);                  /* Result is 3.0 */
    double root = sqrt(x);                  /* Result is 1.5 */

    printf("less is: %.2f\n", less);
    printf("more is: %.2f\n", more);
    printf("root is: %.2f\n", root);

    return 0;
}
