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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}
