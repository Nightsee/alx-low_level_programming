#include <stdlib.h>
#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the last digit of a number
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	} else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}
	return (0);
}
