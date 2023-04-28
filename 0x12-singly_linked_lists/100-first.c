#include <stdio.h>

/**
 * print_first - This prints a string before the main function
 */

void print_first(void) __attribute__ ((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
