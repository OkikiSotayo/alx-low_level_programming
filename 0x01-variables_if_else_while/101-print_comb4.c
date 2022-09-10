#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 *
 * Description: possible different combinations of three digits
 * another code to print possible combination
 * Return: 0
 */

int main(void)
{
	int c = 0, c1, c2;

	while (c <= 9)
	{
		c1 = 0;
		while (c1 <= 9)
		{
			c2 = 0;
			while (c2 <= 9)
			{

				if (c != c1 && c < c1 && c1 != c2 && c1 < c2)
				{
					putchar(c + 48);
					putchar(c1 + 48);
					putchar(c2 + 48);

					if (c + c1 + c2 != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}
				++c2
			}
			++c1

		}
		c++
	}
	putchar('\n');
	return (0);
}
