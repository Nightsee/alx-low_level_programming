#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * description: printing a quote using write function
 * write(int fd. const void *buf. size_t count)
 *
 * Return: Always 1 (Success)
*/


int main(void)
{
	char qtp[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, qtp, 59);
	return (1);
}
