#include "lists.h"

/**
 * add_node - This adds a new node at the beginning of a list_t list.
 * @head: A double pointer to the start of list.
 * @str: A node data.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
