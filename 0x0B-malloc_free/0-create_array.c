#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{

	char *arrayOfChar;
	unsigned int i;

	arrayOfChar = malloc(size);

	if (size == 0 || arrayOfChar == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arrayOfChar[i] = c;
	}

	return (arrayOfChar);
}
