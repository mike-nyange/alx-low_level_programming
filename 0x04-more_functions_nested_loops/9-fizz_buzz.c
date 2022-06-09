#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the numbers from 1 to 100.
 *But for multiples of three print Fizz instead of the number *and for the
 *multiples of five print Buzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzbuzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
