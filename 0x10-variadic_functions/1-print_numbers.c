#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The num of integers passed to the function.
 * @...: A var of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int id;

	va_list num;

	va_start(num, n);

	for (id = 0; id < n; id++)
	{
		printf("%d", va_arg(num, int));
		if (id != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}
