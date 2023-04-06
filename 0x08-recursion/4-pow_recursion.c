#include "main.h"

/**
 * _pow_recursion - will returns the value of x raised to the pow
 * er of y.
 * @x: This is the value to be raised to thr power of y.
 * @y: serves as tye power it self.
 *
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
