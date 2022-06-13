#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: string to be printed.
 */
void puts2(char *str)
{
	int i, j=0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
