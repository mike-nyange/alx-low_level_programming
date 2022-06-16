#include "main.h"

/**
 * _strncat - function concatinating one string to n characters of another.
 * @dest: string to append to dest
 * @src: string to be appended
 * @n: bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] 1= '\0')
	{
		i++;
	}
	while (j = 0; j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);
}
