#include "lists.h"

/**
 * add_nodeint - add a node to the top of the linked list
 * @head: head of the list
 * @n: value of node
 * Return: head of the list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(typeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode = {n, *head};
	*head = newNode;

	return (*head);
}
