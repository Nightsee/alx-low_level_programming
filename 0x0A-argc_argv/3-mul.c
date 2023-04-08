#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
