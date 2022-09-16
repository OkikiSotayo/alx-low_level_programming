#include <stdio.h>

/**
 * main - prints the targer prime facttor
 * of a number
 *
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	int x;

	while (x++ < number / 2)
	{
		if (number % x == 0)
		{
			number /= 2;
			continue;
		}
		for (x = 3; x < number / 2; x += 2)
		{
			if (number % x == 0)
				number /= x;
		}
	}
	printf("%ld\n", number);
	return (0);
}
