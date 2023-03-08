#include "main.h"
int sqrt_helper(int n, int start, int end);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input
 * Return: integer square root of n, -1 if n does not have a natural square
 * root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0, n));
	}
}
/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: integer input
 * @start: starting point for binary search
 * @end: ending point for binary search
 * Return: integer square root of n, -1 if n does not
 * have a natural sqaure root
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int mid_sq = mid * mid;

	if (start > end)
	{
		return (-1);
	}
	else if (mid_sq == n)
	{
		return (mid);
	}
	else if (mid_sq < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1, end));
	}
}
