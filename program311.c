/* Program 3.11 - Program to read calculation from user as input and solve the same */
#include <stdio.h>

int main(void) {
    long double lhs, rhs, result;
    char op = 0;

    lhs = rhs = 0.0l;

    /* Input the calculations */
    printf("Enter your calculation (<num1> <+|-|*|/|%%> <num2>): ");
    scanf("%Lf %c %Lf", &lhs, &op, &rhs);

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
            if (rhs == 0.0L) {
                printf("Division by zero attempted!");
                break;
            }
            result = lhs / rhs;
            break;
        case '%':
            if (rhs == 0.0L) {
                printf("Division by zero attempted!");
                break;
            }
            result = (long)lhs % (long)rhs;
            break;
        default:
            printf("Unknown or unsupported operator: %c\n", op);
            break;
    }

    printf("The result is: %.2Lf\n", result);

    return 0;
}
