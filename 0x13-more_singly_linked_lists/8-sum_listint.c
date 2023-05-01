#include "lists.h"

/**
 * sum_listint - returns the sum of all data stored
 * in the linked list
 * @head: the first node of a list
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
