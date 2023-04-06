#include "main.h"

/**
 * _strlen_recursion - Tbis is a function that returns the lengt
 * of a string.
 * @s: Argument
 *
 * Return: lenght of a string.
 */
int _strlen_recursion(char *s)
{
	int lng = 0;

	if (*s)
	{
		lng++;
		lng += _strlen_recursion(s + 1);
	}

	return (lng);
}
