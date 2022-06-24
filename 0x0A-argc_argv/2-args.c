#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argv count
 * @argv: argv value
 *
 * Return: Always 0 (success)
 */


int main(int argc, char *argv[])
{
    int i = 0;

    for (i; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}