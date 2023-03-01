#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: data type char
 * @src: data type char
 * @n: data type int
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}	
