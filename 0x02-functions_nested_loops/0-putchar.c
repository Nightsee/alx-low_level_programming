#include "main.h"

/**
 * main -prints _putchar using putchar
 *
 * Return: Always 0 success
*/

int main(void)
{
	char tmp[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(tmp[i]);
	}
	_putchar('\n');
	return (0);
}
