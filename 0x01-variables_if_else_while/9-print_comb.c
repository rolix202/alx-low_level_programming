#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * Description - prints the main function
 * Return : 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
