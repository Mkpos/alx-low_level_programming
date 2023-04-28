#include "lists.h"

/**
 * print_listint -  This func prints all the elements of a list_t list
 * @h: A pointer to list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int ab = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		ab++;
	}

	return (ab);
}
