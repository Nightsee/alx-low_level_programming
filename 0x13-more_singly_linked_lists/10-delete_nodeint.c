#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: first node
 * @index: index of the node
 * Return: 1, in case of error -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new, *prev;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	new = prev->next;

	if (index != 0)
	{
		prev->new = new->next;
		free(new);
	}
	else
	{
		free(prev);
		*head = new;
	}

	return (1);
}
