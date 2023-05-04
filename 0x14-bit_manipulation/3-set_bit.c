#include "main.h"

/**
 * set_bit - It sets a value of a bit to 1 at a given index
 * @n: A pointer.
 * @index: An index of the bit starting from 0
 * Return: 1, if on success and -1 if an error occured
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
