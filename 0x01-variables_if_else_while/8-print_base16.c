#include <stdio.h>

/**
 * main - prints letters in binary
 * Description: prints the main function
 *
 * Return:0
 */

int main(void)
{
	char c;

	for (c = "0"; c <= "9"; c++)
	{
		putchar(c);
	}
	for (c = "a"; c <= "f"; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
