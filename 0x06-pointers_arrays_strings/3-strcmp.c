#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: data type char
 * @s2: data type char
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}

		i++;
	}
	return (s1[i] - s2[i]);
}
