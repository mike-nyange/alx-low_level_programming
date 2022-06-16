#include "main.h"

/**
 * _strncpy - copies one string to another.
 * @dest: string to be appended.
 * @src: string to append.
 * @n: number of src.
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
