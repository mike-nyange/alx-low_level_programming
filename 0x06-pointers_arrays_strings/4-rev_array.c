#include "main.h"

/**
 * reverse_array - a function that reverses the content of an integer array.
 * @a: array to be reversed.
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
