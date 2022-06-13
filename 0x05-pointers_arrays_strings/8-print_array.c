#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers.
 * @a: is the array.
 * @n: is the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
