#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only
 * @n: input The string to be encoded
 * Return: Always 0
 */
char *leet(char *n)
{
	int i1 = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (n[i1] == leet[i2] ||
			    n[i1] - 32 == leet[i2])
				n[i1] = i2 + '0';
		}

		i1++;
	}

	return (n);
}
