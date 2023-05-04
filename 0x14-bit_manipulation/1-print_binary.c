#include "main.h"

/**
 * print_binary - It prints the binary representation of a number
 * @n: Is an unsigned long int
 *
 * Return: Nill.
 */
void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0 && n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
