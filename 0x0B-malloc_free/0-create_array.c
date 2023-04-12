#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This function creates an array of chars, and i
 * nitializes it with a specific char.
 * @size: Tbos is the size of an array
 * @c: The char to be filled ij the array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *st;

	if (size == 0)
	{
		return (NULL);
	}
	st = malloc(size * sizeof(char));
	if (st == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < size ; x++)
	{
		st[x] = c;
	}

	return (st);
}
