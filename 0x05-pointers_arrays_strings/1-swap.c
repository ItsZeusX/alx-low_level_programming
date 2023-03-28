#include "main.h"

/**
* swap_int -  swaps the values of two integers
* @a: the first integer to be swapped.
* @b: The second integer to be swapped.
* return: nothing
*/

void swap_int(int *a, int *b)
{

int mx = *a;
*a = *b;
*b = mx;
}
