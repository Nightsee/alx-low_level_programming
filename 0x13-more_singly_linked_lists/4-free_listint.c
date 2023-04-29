#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the allocated memory of a linked list.
 * @head: the first node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp_pointer;

	while ((tmp_pointer = head) != NULL)
	{
		head = head->next;
		free(tmp_pointer);
	}
}
