#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 * otherwise it returns 0
 *
 * @c: The character in ascii code
 *
 * Return: 1 for letters. 0 for the rest.
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
