#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in rever
 *
 * Description: followed by a new line
 * printing lowercase in reverse
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
