#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 i--)
		_putchar(s[i]);
}
