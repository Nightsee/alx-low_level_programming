#include "main.h"

/**
 * _islower - returns 1 if c is lowercase
 * otherwise it returns 0
 *
 * @c : the charachter in ascii code
 *
 * Return: 1 for lowercase characters. 0 for the rest.
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
