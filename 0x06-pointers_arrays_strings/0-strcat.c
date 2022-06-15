#include "main.h"

/**
 * _srtcat - function appends the src string to the dest string.
 * @dest: string
 * @src: string to be appended
 *
 * Return: Char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);
}
