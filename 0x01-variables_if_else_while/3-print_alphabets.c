#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
