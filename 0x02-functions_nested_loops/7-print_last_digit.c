#include "main.h"

/**
 * print_last_digit - it will print the  last digit of a number.
 * @n: the number
 * Return: valude of tye last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');

	return (x);
}

