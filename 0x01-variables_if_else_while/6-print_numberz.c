#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all single digit numbers of base
 *
 * Description: starting from zero followed by a new line
 * still program that prints
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
