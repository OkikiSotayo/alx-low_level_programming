#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: character to find
 *
 * Return: pointer to @s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
