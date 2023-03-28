#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int count = -1;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
	_putchar('\n');
}
