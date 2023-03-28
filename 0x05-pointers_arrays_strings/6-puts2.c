#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: function parameter.
 * Return: void.
 */

void puts2(char *str)
{
	int z;

	for (z = 0 ; str[z] != '\0' ; z++)
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
