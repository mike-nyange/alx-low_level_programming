#include "main.h"

/**
 * _isalpha - checks if alphabet
 * @c: character to compare
 *
 * Return: 1 if true, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
