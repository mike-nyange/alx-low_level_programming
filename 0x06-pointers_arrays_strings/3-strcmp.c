B#include "main.h"

/**
 * _strcmp - Compares s1 and s2
 *
 * @s1: String to be compared against s2
 * @s2: String to be compared against s1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
int _strcmp(char *s1, char *s2)
{
	int s;

	s = 0;
	while (s1[s] != '\0' && s1[s] != '\0')
	{
		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
		s++;
	}
	return (0);
}
