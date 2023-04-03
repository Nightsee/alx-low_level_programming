#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first appearance of the c
 * character in the string s
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	int *first_occurence;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			first_occurence = s + i;
			return (first_occurence);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
