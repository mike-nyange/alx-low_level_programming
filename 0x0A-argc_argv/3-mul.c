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
    
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
           int x = strtol(argv[i], NULL, 10);
           result *= x
        }
        printf("%d\n", result)
    }
}
