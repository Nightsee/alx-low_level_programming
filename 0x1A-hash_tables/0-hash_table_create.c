#include "header.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (unsigned long int i = 0; i < size; i++)
		node[i] = NULL;

	table->array = node;
	table->size = size;

	return (table);
}
