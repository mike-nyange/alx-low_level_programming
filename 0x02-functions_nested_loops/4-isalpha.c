#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int _isalpha(int c)
	{
		if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
