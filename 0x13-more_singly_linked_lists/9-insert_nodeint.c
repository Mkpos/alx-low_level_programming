#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: A double pointer to the linked list.
 * @idx: idx of the list where d new node should be added
 * @n: The node value.
 * Return: the addr of new node, else, NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *pointer = *head;

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else if (idx > 0)
	{
		while (idx != 1)
		{
			if (pointer == NULL)
			{
				return (NULL);
			}
			pointer = pointer->next;
			idx--;
		}
		node->next = pointer->next;
		pointer->next = node;
	}

	return (node);
}
