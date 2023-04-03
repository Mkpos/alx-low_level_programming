#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the ch
 * racter c in the string s, or NULL if the character is not foun
 * d.
 * @c: A character that is to be located.
 * @s: The string to be searched.
 * Return: pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int list;

	for (list = 0 ; s[list] >= '\0' ; list++)
	{
		if (s[list] == c)
			return (s + list);
	}

	return ('\0');
}
