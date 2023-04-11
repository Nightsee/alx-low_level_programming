#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a a spae in memory
 * @str: string to duplicate
 * Return: Null if str is emty or if malloc
 * returns an error, else it e=returns a pointer
*/

char *_strdup(char *str)
{
	char *string_out;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	string_out = malloc(sizeof(char) * (i + 1));

	if (string_out == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string_out[j] = str[j];

	return (string_out);
}
