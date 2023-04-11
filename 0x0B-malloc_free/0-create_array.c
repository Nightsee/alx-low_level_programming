#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: the character that will fill the array
 * Return: a pointer to the array created,
 * or NULL if size is null
 * or malloc returs zero
*/

char *create_array(unsigned int size, char c)
{
	char *cc;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cc = malloc(sizeof(c) * size);
	if (cc == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		cc[i] = c;

	return (cc);
}
