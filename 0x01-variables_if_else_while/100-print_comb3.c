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
	int c = 0, c2;

	while (c <= 9)
	{
		c2 = 0;
		while (c2 <= 9)
		{

		if (c != c2 && c < c2)
		{
			putchar(c + 48);
			putchar(c2 + 48);

			if (c + c2 != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++c2;
	}
	++c;

	}

	putchar('\n');
	return (0);

}
