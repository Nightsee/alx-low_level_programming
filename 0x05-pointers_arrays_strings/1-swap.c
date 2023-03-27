#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: frst int
 * @b: scnd int
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
