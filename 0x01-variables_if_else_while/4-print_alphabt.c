#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first;


	for (first = 'a'; first <= 'z'; first++)
	{
		if (first != 'e' && first != 'q')
		{
			putchar(first);
		}
	}
	putchar('\n');
	return (0);
}
