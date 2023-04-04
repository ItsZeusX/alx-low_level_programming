#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *@a: points to an integer
 *@size: takes an integer value
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, num, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}

	for (num = size - 1; num <= (size * size) - size; num = num + size - 1)
	{
		sum2 = sum2 + a[num];
	}
	printf("%d, %d\n", sum1, sum2);
}
