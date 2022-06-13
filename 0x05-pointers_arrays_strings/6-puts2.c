#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: string to be printed.
 */
void puts2(char *str)
{
	int i, j=0;

<<<<<<< HEAD
	while (str[i] != '\0')
=======
	while (i++)
>>>>>>> 77e04417abfcce93e9082b7ac793b3b0cb74c846
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
