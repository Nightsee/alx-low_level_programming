#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: pointer to an insigned long int
 * @index: index of the bit
 * Return: 1 if worked, -1 if it didn't
*/
int  set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
