/* Exercise 3.3 - Program to calculate discounted total price based on user specified quantity */
#include <stdio.h>

int main(void) {
    const double base_price = 5.5;
    const double discount_over_30 = 0.10;
    const double discount_over_50 = 0.15;

    /* Accept the quantity */
    unsigned int quantity = 0u;
    printf("Enter the quantity: ");
    scanf("%u", &quantity);

    /* Calculate the total price, applying the discount based on quantity */
    double total_price = quantity * (base_price * (1.0 + (quantity > 30u ? discount_over_30 :
        (quantity > 50u ? discount_over_50 : 0.0))));

    printf("Your total price is: $%.2f\n", total_price);

    return 0;
}
