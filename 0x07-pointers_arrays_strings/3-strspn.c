#include "main.h"

/**
 * _strspn - This function calculates the length (in bytes) of
 * the initial segment of s which consists entirely of bytes in
 * accept
 * @accept: This is the prefix to be measured.
 * @s: This is the string to be searced.
 *
 * Return: Returns the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int list;

	while (*s)
	{
		for (list = 0; accept[list] ; list++)
		{
			if (*s == accept[list])
			{
				bytes++;
				break;
			}
			else if (accept[list + 1] == '\0')
				return (bytes);
		}
		
		s++;
	}

	return (bytes);
}

