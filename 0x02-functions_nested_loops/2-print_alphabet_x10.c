#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0 success
*/

void print_alphabet_x10(void)
{
	int i, count;

	for (count = 0; count < 10 ; count++)
	{
		for (i = 97; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
