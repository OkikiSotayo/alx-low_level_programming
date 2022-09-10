#include <stdio.h>

/**
 * main - program that prints all possible combinations
 *
 * Description: single-digit numbers
 * still working oncombination
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ')
		}
	}
	putchar('\n');
	return (0);
}
