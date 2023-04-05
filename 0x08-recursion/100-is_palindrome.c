#include "main.h"
/**
 * _strlen_rec - return length of string
 * @st: string to check
 * Return: length of str
 */
int _strlen_rec(char *st)
{
	if (*st == '\0')
		return (0);
	else
		return (1 + _strlen_rec(st + 1));
}

/**
 * check_pal - checks to see if a string is a palindrome
 * @li: left hand index
 * @ri: right hand index
 * @pp: possible palindrome
 * Return: 1 if palindrome 0 if not
 */
int check_pal(int li, int ri, char *pp)
{
	if (li >= ri)
		return (1);
	else if (pp[li] != pp[ri])
		return (0);
	else
		return (check_pal(li + 1, ri - 1, pp));
}

/**
 * is_palindrome - evaluate string
 * Description: if is a palindrome
 * Return: 1 if true, 0 if not
 * @s: the string
 */
int is_palindrome(char *s)
{
	int x;

	x = _strlen_rec(s) - 1;
	return (check_pal(0, x, s));
}
