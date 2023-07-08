#include "header.h"
/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_indx;
	int res;

	if (key == "" || key == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	key_indx = key_index((unsigned char *)key, ht->size);
	res = add_node(&(ht->array[key_indx]), key, value);
	if (res == 1)
	{
		return (1);
	}
	return (0);
}
/**
 * add_node - adds a node at the beginning of a hash at a given index
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
*/
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (0);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		retrun(1);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (0);
}
