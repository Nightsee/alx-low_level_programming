#include "main.h"

/**
 * _strstr - finds the fist appearence of the substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substing was not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
