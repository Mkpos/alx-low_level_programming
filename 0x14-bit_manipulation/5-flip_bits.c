#include "main.h"

/**
 * flip_bits - will return the number of bits you would need to flip
 * to get from one number to another
 * @n: bits to be flipped.
 * @m: Dest to be flipped to.
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xx;
	unsigned long int yy = 0;

	xx = n ^ m;

	for (yy = 0; xx != 0; yy += 1)
	{
		xx &= (xx - 1);
	}
	return (yy);
}
