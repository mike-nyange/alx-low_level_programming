#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	while (i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
