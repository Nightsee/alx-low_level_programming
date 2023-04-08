#include <stdio.h>

/**
 * main - print's the name of the program
 * @argc: number of arguments
 * @argv: array containing the arguments
 * Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
