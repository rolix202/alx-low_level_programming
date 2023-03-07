#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: data type char
 * @src: data type char
 * @n: data type int
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (dest);
}
