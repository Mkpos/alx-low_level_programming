#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - This function multiplies two numbers
 * @ac: argument count
 * @av: A double pointer to argument
 *
 * Return: 0, if error is 1
 */

int main(int ac, char **av)
{
	int x, sum = 0;

	if (ac > 2)
	{
		while (ac != 1)
		{
			for (x = 0; av[ac - 1][x]; x++)
			{
				if (!isdigit(av[ac - 1][x]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(av[ac - 1]);
			ac--;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
