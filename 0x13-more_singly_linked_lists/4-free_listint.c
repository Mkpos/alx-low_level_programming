#include "lists.h"

/**
 * free_listint - This function frees a listint_t list.
 * @head: A double pointer to the start of list.
 */

void free_listint(listint_t *head)
{
	listint_t *tem = head, *next = NULL;

	while (tem)
	{
		next = tem->next;
		free(tem);
		tem = next;
	}
}
