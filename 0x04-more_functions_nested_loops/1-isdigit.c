#include "main.h"

/**
 * _isdigit - Entry point
 * @c: variable type int
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
