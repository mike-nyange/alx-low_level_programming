#include "main.h"

/**
 * _strchr - locates a string in a character
 * @s: string
 * @c: character to find
 *
 * Return: c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	if (s[n] == c)
		return (s + n);
	return (0);
}
