#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: fimction parameter to be used.
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int length = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		length++;
	if (length % 2 == 0)
	{
		for (x = length / 2 ; str[x] != '\0' ; x++)
			_putchar(str[x]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (x = (length - 1) / 2 ; str[x] != '\0' ; x++)
			_putchar(str[x]);
		_putchar('\n');
	}
}
