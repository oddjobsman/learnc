/* Preprocessor - A program to demonstrate the use of #define macro */
#include <stdio.h>

#define INCHES_PER_FOOT 12

int main(void) {
	printf("There are %d inches in a foot.\n", INCHES_PER_FOOT);
	return 0;
}