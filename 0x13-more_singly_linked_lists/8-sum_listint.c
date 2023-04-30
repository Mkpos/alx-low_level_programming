#include "lists.h"

/**
 * sum_listint - It sums all the data (n) of a listint_t linked list
 * @head: A pointer to the start of a list.
 *
 * Return: The sum, else, 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *tempp = NULL;
	unsigned int total = 0;

	if (head == NULL)
		;
	else
	{
		tempp = head;
		while (tempp)
		{
			total += tempp->n;
			tempp = tempp->next;
		}
	}
	return (total);
}
