#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int cnt = 0, len = 0, n;

	while (str[cnt++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (cnt = n; cnt < len; cnt++)
	{
		_putchar(str[cnt]);
	}
	_putchar('\n');
}
