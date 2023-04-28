#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning of a listint_t list.
 * @head: This is a double pointer to the start of list.
 * @n: This acts a node data.
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point = malloc(sizeof(listint_t));
	listint_t *tem = NULL;

	if (!point)
	{
		return (NULL);
	}
	point->n = n;
	if (head == NULL)
	{
		point->next = NULL;
	}
	else
	{
		tem = *head;
		*head = point;
		(*head)->next = tem;
	}

	return (point);
}
