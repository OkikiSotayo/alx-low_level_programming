#include "main.h"

/**
 * print_alphabet - funcrion to print abc
 *
 * Return: 0
 */

void print_alphabet(void)
{
	charr c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	
	_putchar('\n');
}
