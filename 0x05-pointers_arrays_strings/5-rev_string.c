#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i = 0;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
