#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: bytes fron src to be appended to dest
 *
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, concat;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (concat = 0; concat < n; concat++)
	{
		dest[i + concat] = src[concat];
		if (src[concat] == '\0')
			concat = n;
	}
	return (dest);
}
