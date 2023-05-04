#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	int len, base_two;
	unsigned int ii;

	if (!b)
		return (0);
	ii = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			ii += base_two;
		}
	}
	return (ii);
}
