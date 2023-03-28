#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse to be modified
 * Return: nothing
 */

void rev_string(char *s)
{

int len = 0, fcount = 0;
char mx;

while (s[fcount++])
len++;

for (fcount = len - 1; fcount >= len / 2; fcount--)
{

mx = s[fcount];
s[fcount] = s[len - fcount - 1];
s[len - fcount - 1] = mx;
}
}
