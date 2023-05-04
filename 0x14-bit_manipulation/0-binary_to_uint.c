#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Is a pointer to a string of 0 and 1 chars
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ab = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[ab] != '\0')
	{
		if (b[ab] != '0' && b[ab] != '1')
		{
			return (0);
		}
		result <<= 1;

		if (b[ab] & 1)
			result += 1;
		ab += 1;
	}

	return (result);
}
