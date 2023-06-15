#include "lists.h"

/**
 * add_dnodeint - add a node at head of d list
 * @head: the head
 * @n: the int to add
 * Return: addy of new node or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_s *new_node = malloc(sizeof(dlistint_s));

	if (!*head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
