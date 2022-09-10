#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combinations
 *
 * Description: combinations of two two-digit numbers
 * still writing code to print
 * Return: 0
 */

int main(void)
{
	int c = 0, c1;

	while (c <= 99)
	{
		c1 = c;
		while (c1 <= 99)
		{
			if (c1 != c)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((c1 / 10) + 48);

				if (c != 98 || c1 != 98)
				{

					putchar(',');
					putchar(' ');
				}
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
