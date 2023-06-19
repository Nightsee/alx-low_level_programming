#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int number_of_bytes = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				number_of_bytes++;
		}
	}
	return (number_of_bytes);
}
