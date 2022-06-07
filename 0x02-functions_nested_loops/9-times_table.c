#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * 0);
			_putchar(i * 1);
			_putchar(i * 2);
			_putchar(i * 3);
			_putchar(i * 4);
			_putchar(i * 5);
			_putchar(i * 6);
			_putchar(i * 7);
			_putchar(i * 8);
			_putchar(i * 9);
			_putchar('\n');
		}
	}
}
