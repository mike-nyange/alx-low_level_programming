#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: product of multiplication, integer
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;
	unsigned long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (mul1 = 1; mul1 < argc; mul1++)
	{
		for (mul2 = 0; argv[mul1][mul2] != '\0'; mul2++)
		{
			if (argv[mul1][mul2] > 57 || argv[mul1][mul2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", product);
	return (0);
}