#include "lists.h"
#include <stdio.h>

/**
 * print_list -  This function prints all elements of a list_t list.
 * @h: The pointer to list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int ab = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		ab++;
	}
	return (ab);
}
