#include "main.h"

/**
 * print_line - Entry point
 * @n: variable int
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
