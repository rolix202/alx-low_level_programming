#include "main.h"

/**
 * reverse_array - Entry point
 * @a: data type int
 * @n: data type int
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
