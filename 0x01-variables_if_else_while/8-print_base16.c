#include <stdio.h>

/**
 * main - program that prints all the numbers of base
 *
 * Description:followed by a new line
 * also printing base
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
