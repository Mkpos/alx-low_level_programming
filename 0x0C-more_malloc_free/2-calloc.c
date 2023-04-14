#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - This is a function that allocates memory for an arra
 * y, using malloc
 * @size: bytes to be allocated
 * @nmemb: elements
 *
 * Return: pointer to the allocated memory else, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pt = malloc(size * nmemb);

	if (pt == NULL)
	{
		return (NULL);
	}
	memset(pt, 0, size * nmemb);

	return (pt);
}
