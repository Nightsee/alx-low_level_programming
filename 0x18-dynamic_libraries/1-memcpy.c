#include "main.h"

/**
 * _memcpy - copies the content of memory area src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: a pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
