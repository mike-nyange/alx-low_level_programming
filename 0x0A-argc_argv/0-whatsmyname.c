#include <stdio.h>

/**
* main - print name of the file
* @argc: argv count
* @argv: char string
* Return - Always 0 (Success)
*/

int main (int argc, char* argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
