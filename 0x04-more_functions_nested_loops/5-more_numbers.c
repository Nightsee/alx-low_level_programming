#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 *
 * Return: no return
*/

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
