#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: int
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int low = 1;
	int  high = n;
	int ans = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (mid * mid == n)
		{
			ans = mid;
			break;
		}

		else if (mid * mid < n)
		{
			low = mid + 1;
			ans = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (ans);
}
