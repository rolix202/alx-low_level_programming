#include "main.h"

/**
 * print_triangle - entry point
 * @size: variable int
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
