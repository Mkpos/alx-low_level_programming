#include "main.h"

/**
 * factorial - This function will return the factorial of a given
 * number.
 * @n: number to be checked.
 *
 * Return: Factorial of n.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
