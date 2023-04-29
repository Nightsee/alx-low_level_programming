#include "lists.h"
/**
 * free_listint2 - frees the memory allocated for a linked list.
 * @head: the first node.
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
