#include "main.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 * @c: is c an integer argument
 *
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
