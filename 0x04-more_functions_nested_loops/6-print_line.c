#include "main.h"
#include <stdio.h>

/**
 * print_line - entry point
 *
 * @n: number of times _ should be printed
 *
 * Return: nothing
*/

void print_line(int n)
{
	int underscore = 95;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(underscore);
		}
		_putchar('\n');
	}
}
