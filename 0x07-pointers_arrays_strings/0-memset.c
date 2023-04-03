#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: memory area to fill
 * @b: the constante byte
 * @n: bytes to fill
 * Return: the pointer to the s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
