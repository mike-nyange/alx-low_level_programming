#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination of copy
 * @src: source
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
