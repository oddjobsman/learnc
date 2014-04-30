/* Exercise 3.4 - Program to perform user-define binary calculation with loop using goto */
#include <stdio.h>

int main(void) {
    double lhs, rhs, result;
    char op = 0;

calc:
    printf("Enter your calculation (<num1> <op> <num2>): ");
    scanf("%lf %c %lf", &lhs, &op, &rhs);

    switch (op) {
        case '+':
            result = lhs + rhs;
            break;
        case '-':
            result = lhs - rhs;
            break;
        case '*':
            result = lhs * rhs;
            break;
        case '/':
            if (rhs == 0.0) {
                printf("Division by zero attempted!\n");
                break;
            }
            result = lhs / rhs;
            break;
        case '%':
            if (rhs == 0.0) {
                printf("Division by zero attempted!\n");
                break;
            }
            result = (long)lhs % (long)rhs;
            break;
        default:
            printf("Invalid operation attempted: %c\n", op);
            break;
    }

    printf("The result is: %.2lf\n", result);

    /* Ask user if he wishes to attempt another calculation */
    char choice = 'n';
    printf("Would you like to perform another calculation? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
        goto calc;

    return 0;
}
