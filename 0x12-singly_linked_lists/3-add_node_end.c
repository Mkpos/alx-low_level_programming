#include "lists.h"

/**
 * add_node_end - This adds a new node at the end of a list_t list.
 * @head: A double pointer to the start of list.
 * @str: A node data.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pt = malloc(sizeof(list_t));
	list_t *tem = *head;

	if (!pt)
	{
		return (NULL);
	}
	pt->len = strlen(str);
	pt->str = strdup(str);
	pt->next = NULL;

	if (*head == NULL)
	{
		*head = pt;
		return (*head);
	}
	else
	{
		while (tem->next)
		{
			tem = tem->next;
		}
		tem->next = pt;
	}
	return (pt);
}
