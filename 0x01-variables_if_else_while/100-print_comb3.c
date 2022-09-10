#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Description: same as main
 * Same as description
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		putchar ((c / 10) + '0');
		putchar ((c % 10) + '0');

		if (c != 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
