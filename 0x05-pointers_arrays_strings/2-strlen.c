#include "main.h"

/**
 * _strlen - Returns the string length
 * @s: string whose length is to be printed
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
