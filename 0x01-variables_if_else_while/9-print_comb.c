#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * Description - prints the main function
 * Return : 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
