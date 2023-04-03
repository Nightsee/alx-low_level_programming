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

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (S + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
