#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = x * y;
			if (x == 0)
			{
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}			
		}
	}
}
