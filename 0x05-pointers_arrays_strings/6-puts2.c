#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int a, b;

	a = str;
	for (b = 0; b < a; b += 2)
		_putchar(str[b]);
	_putchar('\n');
}
