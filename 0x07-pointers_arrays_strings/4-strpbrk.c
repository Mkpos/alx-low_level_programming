#include "main.h"

/**
 * _strpbrk - This function locates the first occurrence in the
 * string s of any of the bytes in the string accept.
 * @accept: A set of byte to be searched for in the program.
 * @s: The string in which the program will search from.
 *
 * Return: Return a pointer to the byte in s that matches one o
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int list;

	while (*s)
	{
		for (list = 0 ; accept[list] ; list++)
		{
			if (*s == accept[list])
				return (s);
		}
		s++;
	}
	return ('\0');
}
