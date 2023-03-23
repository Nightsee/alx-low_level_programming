#include "main.h"

/**
 * _isupper - check if a c is uppercase
 *
 * @c: the character code in ascii table
 *
 * Return: if uppercase 1, else 0
*/

int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
