/* Program 4.4 - Summing integers - compact version */ 
#include <stdio.h>

int main(void) {
    unsigned long long sum = 0LL;                           /* Stores the sum of numbers */
    unsigned int count = 0u;                                /* Stores the number of integers to be summed */

    printf("Enter the number of integers to be summed: ");
    scanf("%u", &count);

    for (unsigned int i = 1; i <= count; sum += i++);

    printf("The total of the first %u numbers is %llu\n", count, sum);

    return 0;
}