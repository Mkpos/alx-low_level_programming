#include "main.h"

/**
 * *_memcpy - The memcpy() function copies n bytes from memory a
 * rea src to memory area dest.
 * @n: The nunber of bytes to be copied.
 * @dest: The memory area dest.
 * @src: the memory area.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
