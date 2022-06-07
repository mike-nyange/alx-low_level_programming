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
			multiplied_value = x * y;
			if (x == 0)
			{
				_putchar(multiplied_value + '0');
			}
			else if (multiplied_value >= 10)
			{
				_putchar(' ');
				_putchar(multiplied_value / 10 + '0');
				_putchar(multiplied_value % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplied_value + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}			
		}
	}
}
