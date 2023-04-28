#include "lists.h"

/**
 * add_nodeint_end - It adds a new node at the end of a listint_t list.
 * @head: This is a double pointer to the start of list.
 * @n: argument for node data.
 *
 * Return: the address of the new element, else, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point = malloc(sizeof(listint_t));
	listint_t *tem = *head;

	if (!point)
	{
		return (NULL);
	}
	point->n = n;
	point->next = NULL;

	if (*head == NULL)
	{
		*head = point;
		return (*head);
	}
	else
	{
		while (tem->next)
		{
			tem = tem->next;
		}
		tem->next = point;
	}
	return (point);
}
