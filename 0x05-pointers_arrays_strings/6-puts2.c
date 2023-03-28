#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{

int fcount = 0, len = 0;

while (str[fcount++])
len++;

for (fcount = 0; fcount < len; fcount += 2)
_putchar(str[fcount]);

_putchar('\n');
}
