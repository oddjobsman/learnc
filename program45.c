/* Program 4.5 - Summing integers backward */
#include <stdio.h>

int main(void) {
	unsigned long long sum = 0LL;
	unsigned int count = 0;
	
	printf("Enter the number of integers you want to sum: ");
	scanf("%u", &count);
	
	for (unsigned int i = count; i >= 1; sum += i--);
	
	printf("Total of the first %u numbers is %llu\n", count, sum);
	
	return 0;
}