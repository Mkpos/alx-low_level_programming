#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: Size of element to print.
 * @action: pointer to print in hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
