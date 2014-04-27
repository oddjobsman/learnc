/* Program 2.11 - Finding the limits */
#include <stdio.h>                          /* For command line IO */
#include <limits.h>                         /* For integer limits */
#include <float.h>                          /* For float limits */

int main(void) {
    printf("Variables of type char can range from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char can range from 0 to %u\n", UCHAR_MAX);
    printf("Variables of type short can range from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Variables of type unsigned short can range from 0 to %u\n", USHRT_MAX);
    printf("Variables of type int can range from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variables of type unsigned int can range from 0 to %u\n", UINT_MAX);
    printf("Variables of type long can range from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variables of type unsigned long can range from 0 to %lu\n", ULONG_MAX);
    printf("Variables of type long long can range from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Variables of type unsigned long long can range from 0 to %llu\n", ULLONG_MAX);

    printf("\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
    printf("The size of the largest value of type float is %.3e\n", FLT_MAX);
    printf("The size of the smallest positive non-zero value of type double is %.3e\n", DBL_MIN);
    printf("The size of the largest value of type double is %.3e\n", DBL_MAX);
    printf("The size of the smallest positive non-zero value of type long double is %.3Le\n", LDBL_MIN);
    printf("The size of the largest value of type long double is %.3Le\n", LDBL_MAX);

    printf("\nVariables of type float provide %u decimal digits precision.\n", FLT_DIG);
    printf("Variables of type double provide %u decimal digits precision.\n", DBL_DIG);
    printf("Variables of type long double provide %u decimal digits precision.\n", LDBL_DIG);

    return 0;
}

