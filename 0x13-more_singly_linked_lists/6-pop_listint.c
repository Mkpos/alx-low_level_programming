#include "lists.h"

/**
 * pop_listint - It deletes the head node of a listint_t linked list
 * @head: Argument for a double pointer to the start of list.
 *
 * Return: A head node’s data.
 */

int pop_listint(listint_t **head)
{
	listint_t *tem = NULL;
	int input;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tem = (*head)->next;
		input = (*head)->n;
		free(*head);
		*head = tem;

		return (input);
	}
	return (1);
}
