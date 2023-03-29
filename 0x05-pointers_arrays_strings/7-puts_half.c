#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: fimction parameter to be used.
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
			break;
	}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
