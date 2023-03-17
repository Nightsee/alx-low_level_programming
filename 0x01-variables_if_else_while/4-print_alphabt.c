#include <stdio.h>

/**
 * main - print alphabets except for q and e
 *
 * Return: Always 0 (success)
*/

int main()
{
    char ch;
  
    // Write the Character to stdout
    for (ch = 'a'; ch <= 'z'; ch++)
    {
    	if(ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
    }
        
    putchar('\n');

    return 0;
}
