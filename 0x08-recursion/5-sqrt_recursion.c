#include "main.h"
/**
 * sqrt_check - checks for the square root of y
 * @x:guess at sqrt
 * @y: number to find sqrt of x
 * Return: -1 or sqrt of y
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - square root
 * Description: only natural numbers
 * @n: the number to evaluate
 * Return: -1 if not natual
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
