#include "main.h"

/**
 * _strlen - checks length of string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
