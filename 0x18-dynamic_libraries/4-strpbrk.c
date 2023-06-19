#include "main.h"

/**
 * _strpbrk - searches for a set of bytes in a string
 * @s: source string
 * @accept: the accepted bytes
 * Return: a pointer to the byte in s that matchrs
 * a byte in accept or null if no byte is there
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
