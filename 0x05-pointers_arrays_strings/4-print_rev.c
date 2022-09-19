#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: pointer to string
 *
 * Return: void;
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	for (; b >= 0; a--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
