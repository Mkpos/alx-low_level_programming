#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - This function returns a pointer to a newly allocate
 * d space in memory, which contains a copy of the string given a
 * s a parameter.
 *
 * @str: This is the string that will be duplicated.
 * Return: NULL if str = NULL or On success, the _strdup function
 * returns a pointer to the duplicated string. It returns NULL if
 * nsufficient memory was available
 */
char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}
	st = malloc((sizeof(char) * y) + 1);

	if (st == NULL)
	{
		return (NULL);
	}
	while (x < y)
	{
		st[x] = str[x];
		x++;
	}

	st[x] = '\0';
	return (st);
}
