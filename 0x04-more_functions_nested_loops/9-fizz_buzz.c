#include <stdio.h>

/**
 * main - print the numbers from 1 to 100
 * for fizz or buzz or fizzbuzz
 *
 * Return: returns
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
