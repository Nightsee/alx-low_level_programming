#include "main.h"

/**
 * _isdigit - check's if c is a digit
 *
 * @c: ascii code of the digit
 *
 * Return: 1 if digit, 0 if else
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
