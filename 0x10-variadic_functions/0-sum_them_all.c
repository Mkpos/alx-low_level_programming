#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int lo, sum = 0;
	va_list ls;

	va_start(ls, n);

	for (lo = 0; lo < n; lo++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);

	return (sum);
}


