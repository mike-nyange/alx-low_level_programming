#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * Return 1 if character is lower, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
