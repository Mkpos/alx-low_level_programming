#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be appended to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int dest_len = 0;
	int src_len = 0;

	for (x = 0 ; dest[x] != '\0' ; x++)
		dest_len++;
	for (x = 0 ; src[x] != '\0' ; x++)
		src_len++;
	for (x = 0 ; x < n ; x++)
		dest[dest_len + x] = src[x];
	return (dest);
}
