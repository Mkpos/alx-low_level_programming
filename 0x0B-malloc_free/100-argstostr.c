#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: parameter
 * @av: paramter
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int ct = 0, i = 0, j = 0, k = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ct++;
			j++;
		}

		j = 0;
		i++;
	}
	st = malloc((sizeof(char) * ct) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			st[k] = av[j][j];
			k++;
			j++;
		}
		st[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	st[k] = '\0';
	return (st);
}
