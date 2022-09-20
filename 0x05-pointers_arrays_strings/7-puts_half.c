#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, c;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}

	if (b % 2 == 0)
	{
		c = b / 2;
		for (a = c; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		c = (b - 1) / 2;
		for (a = c + 1; a < b; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
