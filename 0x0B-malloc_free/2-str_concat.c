#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string
*/

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	string = malloc(sizeof(char) * (i + j + 1));

	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		string[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		string[k] = s2[j];

	return (string);
}
