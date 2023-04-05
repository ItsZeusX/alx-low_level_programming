#include "main.h"
/**
 * is_prime_number - evaluate a number
 * Description: if is prime number
 * Return: 1 if primer, otherwise 0
 * @n: the number
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if ((n % 2 != 0) && (n / 3 != 0) && (n % 5 != 0))
		return (1);
	else
		return (0);
}
