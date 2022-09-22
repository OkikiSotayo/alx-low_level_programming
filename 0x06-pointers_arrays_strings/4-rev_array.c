#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integes
 * @a: point to array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int element, count;

	n = n - 1;

	count = 0;
	while (count <= n)
	{
		element = a[count];
		a[count++] = a[n];
		a[n--] = element;
	}
}

