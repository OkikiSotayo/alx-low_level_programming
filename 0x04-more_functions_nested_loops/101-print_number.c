#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: The number to print
 */

void print_nymber(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % n10 + '0');
}
