#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list.
 * @head: A double pointer to the start of list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tem = NULL, *next = NULL;

	if (head)
	{
		tem = *head;
		while (tem)
		{
			next = tem->next;
			free(tem);
			tem = next;
		}
		*head = NULL;
	}

	head = NULL;
}
