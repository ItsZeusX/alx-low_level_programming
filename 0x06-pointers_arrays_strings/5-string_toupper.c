#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @n: input string
* Return: a pointer to the changed string.
*/
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
