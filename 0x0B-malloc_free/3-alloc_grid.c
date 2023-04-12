#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of i
 * ntegers.
 * @width: parameter
 * @height: parameter
 *
 * Return: NULL on failure.
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	z = malloc(sizeof(int *) * height);

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (a = 0 ; a < height ; a++)
	{
		z[a] = malloc(sizeof(int) * width);

		if (z[a] == NULL)
		{
			for (b = a ; b >= 0 ; b--)
			{
				free(z[a]);
			}
			free(z);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0 ; d < height ; d++)
		{
			z[c][d] = 0;
		}
	}
	return (z);
}
