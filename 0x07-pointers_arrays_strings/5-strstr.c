#include "main.h"

/**
 * *_strstr - this function finds the first occurrence of the sub
 * string needle in the string haystack.
 * @needle: Tbis is the substring to be traced.
 * @haystack: The string to be searched.
 *
 * Return: a pointer to the beginning of the located substring, o
 * r NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int basis;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		basis = 0;
		if (haystack[basis] == needle[basis])
		{
			do {
				if (needle[basis + 1] == '\0')
					return (haystack);
				basis++;

			} while (haystack[basis] == needle[basis]);
		}

		haystack++;
	}

	return ('\0');
}
