#include "main.h"

/**
 * puts_half - print second half of the string.
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (i /= 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (i %2)
	{
		for (j = (i - 1) / 2; j < (i - 1); j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
