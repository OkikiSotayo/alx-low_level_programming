#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c, more;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		more = s[c];
		s[c] = s[b];
		s[b] = more;
		c++;
		b--;
	}
}
