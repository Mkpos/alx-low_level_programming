#include "main.h"

/**
 * _print_rev_recursion - This wipp prints a string in reverse.
 * @s: Argument
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

