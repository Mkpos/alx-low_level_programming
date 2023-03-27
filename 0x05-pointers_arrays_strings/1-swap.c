#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: Value 1
 * @b: Value 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
