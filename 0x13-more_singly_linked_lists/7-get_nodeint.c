#include "lists.h"

/**
 * get_nodeint_at_index - It ret the nth node of a listint_t linked list
 * @head: Argument pointer to the start of list.
 * @index: This is the index of the node starting at zero(0).
 *
 * Return: The node at (n)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tem = NULL;

	if (head == NULL)
		;
	else
	{
		tem = head;
		while (index != 0 && tem)
		{
			tem = tem->next;
			index--;
		}
		if (index == 0)
		{
			return (tem);
		}
	}

	return (NULL);
}
