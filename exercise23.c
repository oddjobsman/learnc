/* Exercise 2.3 - Program to calculate total by selecting user-specified product type and quantity */
#include <stdio.h>

int main(void) {
    const double standard_price = 3.50;
    const double deluxe_price = 5.50;

    /* Print the product type menu */
    printf("Available product types:\n");
    printf("\t1. Standard - $3.50\n");
    printf("\t2. Deluxe - $5.50\n");

    /* Get the user selection */
    unsigned int  product_type = 0u;
    printf("Enter your product type (1/2): ");
    scanf("%u", &product_type);

    /* Get the quantity from user */
    unsigned int quantity = 0u;
    printf("Enter the quantity: ");
    scanf("%u", &quantity);

    double total = quantity * (standard_price + ((product_type - 1) * 
        (deluxe_price - standard_price)));

    printf("The total you got to pay is: %.2f\n", total);

    return 0;
}
