#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int J = 1;
	char *c = (char *) &J;

	return (*c);
}
