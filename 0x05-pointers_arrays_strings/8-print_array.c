#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers.
 * @a: is the array.
 * @n: is the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (*a[i] != '\0')
	{
		i++;
	}
	for (i; i <= n; i++)
	{
		_putchar(*a[i]);
	}
	_putchar('\n');
}
