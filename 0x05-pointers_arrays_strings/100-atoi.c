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
	unsigned int  i = 0;
	unsigned int res = 0;
	unsigned int sign = 1;
	unsigned int brk = 0;


	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; ((s[i]) != '\0'); ++i)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] == '+')
		{
			sign = sign * 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	return (sign * res);
}
