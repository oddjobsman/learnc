/* Program 3.6 - Multiple discount levels */
#include <stdio.h>

int main(void) {
    const double unit_price = 3.50;                     /* Unit price in dollars */
    const double discount1 = 0.05;                      /* Discount for more than 10 */
    const double discount2 = 0.1;                       /* Discount for more than 20 */
    const double discount3 = 0.15;                      /* Discound for more than 30 */

    int quantity = 0;
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    /* Calculate the total price applying the discount based on quantity */
    double total_price = quantity * unit_price * (1.0 - (quantity > 30 ? discount3 : 
        (quantity > 20 ? discount2 : 
            (quantity > 10 ? discount1 : 0.0))));

    printf("The total price is: $%.2f\n", total_price);

    return 0;
}
