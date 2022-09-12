#include <stdio.h>

/**
 * main - prints in lowercase
 * Description: using main function
 * this program prints in lowercase
 * Return:0
 */

int main(void)
{
	char c;
	
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
