#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar("\n");
	return (0);
}
