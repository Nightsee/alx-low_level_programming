#include "main.h"

/**
 * print_alphabet - this is a function that prints alphabets
 *
 * Return: Always 0 succes
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
