#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *  @separator: string toprint btween numbers
 *  @n: number of integers passed to the function
 *
 *  Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
