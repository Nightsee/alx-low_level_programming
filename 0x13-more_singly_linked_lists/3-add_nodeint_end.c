#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 * @head: first node
 * @n: data
 * Return: the fiest node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;
	listint_t *new;

	tail = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new = {n, NULL};

	while (tail != NULL)
	{
		if (tail->next == NULL)
		{
			tail->next = new;
		}
		tail = tail->next;
	}
	else
	{
		*head = new;
	}

	return (*head);
}
