#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: the first node
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nElements = 0;

	while (h != NULL)
	{
		nElements++;
		h = h->next;
	}
	return (nElements);
}
