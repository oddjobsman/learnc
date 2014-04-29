/* Program 3.2 - Using if statements  to decide on a discount */
#include <stdio.h>

int main(void) {
    const double unit_price = 3.50;                         /* Unit price in dollars */

    int quantity = 0;
    printf("Enter the quantity that you want to buy: ");
    scanf("%d", &quantity);

    /* Test for order quantity qualifying for a discount */
    double total = 0.0;
    if (quantity > 10)
        total = quantity * unit_price * 0.95;               /* Apply a 5% discount */
    else
        total = quantity * unit_price;                      /* No discount */

    printf("The price for %d is $%.2f\n", quantity, total);

    return 0;
}
