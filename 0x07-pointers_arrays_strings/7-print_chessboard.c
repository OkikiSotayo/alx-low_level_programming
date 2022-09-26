#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: Doubel pointer
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	unsigned int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');

	}
}
