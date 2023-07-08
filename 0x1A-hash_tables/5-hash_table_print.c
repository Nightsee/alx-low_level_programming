#include "header.h"
/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer to the hash table
 * Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	char *sep;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	printf("{");
	sep = "";
	i = 0;
	if (;
	i < ht->size;
	i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
		printf("}\n");
	}
}
