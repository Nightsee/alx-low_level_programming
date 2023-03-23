#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - entry point
 *
 * @n: number of times
 *
 * Return: nothing
*/

void print_diagonal(int n)
{
	int espace = 27;
	int backslach = 92;
	int i, j;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			if (i != 0)
			{
				for (j = i; j > 0; j--)
				{
					_putchar(espace);
				}
				_putchar(backslach);
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
