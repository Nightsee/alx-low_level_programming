#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: this program prints if n is positive or negative or null
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n > 0)
	{
		printf("%d is positive", n);
	} else
	{
		print("0 is zero", n);
	}
	return (0);
}
