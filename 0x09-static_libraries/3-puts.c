#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: str followed by a new line
 */
void _puts(char *str)
{
	int ln = 0;

	while (*(str + ln) != '\0')
	{
		_putchar(str[ln]);
		ln++;
	}
	_putchar('\n');
}
