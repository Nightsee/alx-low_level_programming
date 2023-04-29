#include "lists.h"
/**
 * get_nodeint_at_index - returns a pointer to the node correspending
 * to an index
 * @head: first node
 * @index: index of the node to return
 * Return: adresse of a node of the given index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr_node_indx;
	int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
