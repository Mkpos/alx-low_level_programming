#include "lists.h"

/**
 * list_len - This finds the numb of elements in a linked list_t list.
 * @h: A pointer to list.
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int ab = 0;

	while (h)
	{
		ab++;
		h = h->next;
	}
	return (ab);
}
