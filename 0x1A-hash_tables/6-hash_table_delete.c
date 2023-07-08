#include "header.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp1 = tmp;
			tmp = tmp->next;
			free(tmp1->value);
			free(tmp1->key);
			free(tmp1);
		}
	}
	free(ht->array);
	free(ht);
}
