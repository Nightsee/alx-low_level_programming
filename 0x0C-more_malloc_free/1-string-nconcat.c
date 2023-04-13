#include <stlib.h>
#include "main.h"

/**
 * string_nconcat - concatinate two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes to copy from s2
 * Return: pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int l1, l2, lout, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
                ;

	if (n > l2)
		n = l2;

	lout = l1 + n;
	out = malloc(lout + 1);

	if (out == NULL)
		return (NULL);

	for (i = 0; i < lout; i++)
		if (i < l1)
			out[i] = s1[i];
		else
			out[i] = s2[i - l1];
	out[i] = '\0';

	return (out);
}
