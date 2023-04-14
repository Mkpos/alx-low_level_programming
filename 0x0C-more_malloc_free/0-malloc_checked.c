#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: The size of memory.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
