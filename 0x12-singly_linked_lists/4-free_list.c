#include "lists.h"

/**
 * free_list - This function frees a list_t list.
 * @head: A double pointer to the start of list.
 */

void free_list(list_t *head)
{
	list_t *tempo = head, *next = NULL;

	while (tempo)
	{
		free(tempo->str);
		next = tempo->next;
		free(tempo);
		tempo = next;
	}
}
