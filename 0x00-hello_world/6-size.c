#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: with proper grammar, but the outcome is a piece of art
 * this program prints with proper grammar, but the outcome is a piece of art
 * Return:0
 */

int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(float);
	int e = sizeof(long long int);
	
	printf("Size of a char: %i byte(s)\n", a);
	printf("Size of an int: %i byte(s)\n", b);
	printf("Size of a long int: %i byte(s)\n", c);
	printf("Size of a long long int: %i byte(s)\n", e);
	printf("Size of a float: %i byte(s)\n", d);
	
	return(0);
}
