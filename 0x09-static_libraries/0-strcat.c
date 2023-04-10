#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int dest_len = 0;
	int src_len = 0;

	for (x = 0 ; dest[x] != '\0' ; x++)
		dest_len++;
	for (x = 0 ; src[x] != '\0' ; x++)
		src_len++;
	for (x = 0 ; x <= src_len ; x++)
		dest[dest_len + x] = src[x];
	return (dest);
}

