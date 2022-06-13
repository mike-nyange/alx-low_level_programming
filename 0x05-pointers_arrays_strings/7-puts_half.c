#include "main.h"

/**
 * puts_half - print second half of the string.
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
