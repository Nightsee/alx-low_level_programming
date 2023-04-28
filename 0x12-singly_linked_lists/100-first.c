#include <stdio.h>
/**
 * before_main - this function is executed before the main function
 * Return: nothing
*/
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
