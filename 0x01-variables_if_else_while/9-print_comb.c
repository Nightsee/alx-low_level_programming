#include <stdio.h>

/**
 * main -print combo of digits
 *
 * Return: always 0 for success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");
	return (0);
}
