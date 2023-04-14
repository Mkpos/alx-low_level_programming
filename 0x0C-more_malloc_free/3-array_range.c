#include <stdlib.h>
#include "main.h"

/**
 * array_range - This is a function that creates an array of integers
 * @min: min range of values stored
 * @max: max range of values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int x, y;

	if (min > max)
	{
		return (NULL);
	}
	y = max - min + 1;

	pt = malloc(sizeof(int) * y);

	if (pt == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		pt[x] = min++;
	}
	return (pt);
}
