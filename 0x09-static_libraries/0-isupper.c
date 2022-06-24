#include "main.h"

/**
 * _isupper - main function that will check for uppercase character
 * @c: integer to check for uppercase probability
 *
 * Return: if uppercase return 1, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
