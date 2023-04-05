#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: an integer
 * Return: -1 if n is lower than 0, 1 of n is equal to 0
 * and the factorial of n if n is different than 0 and 1
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
