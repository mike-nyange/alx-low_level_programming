#include "main.h"

/**
 * swap_int - a fuction that swaps the value of two integers.
 * @a: to be swapped with b
 * @b: to be swapped with a
 *
 * Description: swap_int swaps the value of *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
