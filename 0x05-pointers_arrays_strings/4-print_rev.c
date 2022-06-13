#include "main.h"

/**
 * print_rev - prints reversed string.
 *@s: pointer to the string that we are printing in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
