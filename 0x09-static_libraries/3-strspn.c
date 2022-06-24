#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: bytes accepted
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				length++;
				break;
			}
		}
		if (s[b] == '\0')
			return (length);
	}
	return (length);
}
