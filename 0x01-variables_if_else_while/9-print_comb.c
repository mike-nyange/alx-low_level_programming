#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i <= '8')
		{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
