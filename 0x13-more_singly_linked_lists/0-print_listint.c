#include "lists.h"
#include <stdio.h>

/**
 * print_listint - count the number of nodes in a linked list
 * @h: the first node
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nNodes++;
	}

	return (nNodes);
}
