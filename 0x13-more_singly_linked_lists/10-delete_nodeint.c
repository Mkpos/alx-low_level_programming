#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes the node at index of a linked list
 * @head: A ouble pointer to the start of list
 * @index: this is the index to be removed
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = NULL, *node = NULL;

	if (*head == NULL)
		;
	else
	{
		tem = *head;
		if (index == 0)
		{
			tem = *head;
			*head = tem->next;
			free(tem);
			return (1);
		}

		while (index != 1 && tem)
		{
			tem = tem->next;
			index--;
		}
		if (index == 1)
		{
			node = tem->next;
			tem->next = node->next;
			free(node);

			return (1);
		}
	}

	return (-1);
}
