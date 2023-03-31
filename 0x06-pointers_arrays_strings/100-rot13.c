#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13.
* @s: the string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *s)
{
	int i1 = 0, i2 = 0;
	char letter1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i1) != 0)
	{
		for (i2 = 0; i2 <= 52; i2++)
		{
			if (*(s + i1) == letter1[i2])
			{
				*(s + i1) = letter2[i2];
				break;
			}
		}
				i1++;
	}
		return (s);
}
