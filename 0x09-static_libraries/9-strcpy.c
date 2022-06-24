#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - function copies a string
 * @src: source
 * @dest: destination of copy
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c <= _strlen(src); c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
