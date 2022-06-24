#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argv count
 * @argv: argv value
 *
 * Return: Always 0 (success)
 */


int main(int argc, char *argv[])
{
    int i, result;

    if (argc > 2)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
		int x = atoi(argv[i]);
		result *= x;
		printf("%d\n", result);
        }
    }
}
