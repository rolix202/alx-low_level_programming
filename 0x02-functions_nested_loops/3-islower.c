#include "main.h"

/**
 * _islower - Entry point
 * @c: The integer value it recieves*
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
