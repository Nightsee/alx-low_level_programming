#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to the memory or status 98
*/

void *malloc_checked(unsigned int b)
{
	char *pointer;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
