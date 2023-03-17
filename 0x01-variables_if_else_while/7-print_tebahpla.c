#include <stdio.h>

/**
 * main - print in reverse the alphabets
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
