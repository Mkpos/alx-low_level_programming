#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL,  print (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ind;
	char *str;

	va_list string;

	va_start(string, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (ind != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
