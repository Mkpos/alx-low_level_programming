#include "lists.h"

/**
 * listint_len - This finds the number of elements in a linked list_t list.
 * @h: A pointer to list
 *
 * Return: Result
 */

size_t listint_len(const listint_t *h)
{
	unsigned int ab = 0;

	while (h)
	{
		h = h->next;
		ab++;
	}

	return (ab);
}
