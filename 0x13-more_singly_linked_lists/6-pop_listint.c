#include "lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: first node
 * Return: data stored in the first node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h, *current;

	if (*head != NULL)
	{
		current = *head;
		n = current->n;
		h = current->next;
		free(*head);
		free(current);
		*head = h;
		return (n);
	}
	return (0);
}
