#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 *
 * Return: converted string
 */

int _atoi(char *s)
{
	int  i = 0;
	int res = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for(i = i; (s[i]) = '\0'; ++i)
	{
		res = (res * 10) + s[i] - '0';
	}
	return (sign*res);
}
