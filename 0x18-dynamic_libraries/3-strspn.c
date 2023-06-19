#include "main.h"
/**
 * _strspn - get lenght of a prefix substring
 * @s: string to compared
 * @accept: straing that we gonna use
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, num, val, check;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (num = 0; accept[num] != '\0'; num++)
		{
			if (accept[num] == s[i])
			{
				val++;
				check = 1;
			}
		}
		if (check == 0)
			return (val);
	}

	return (val);
}
