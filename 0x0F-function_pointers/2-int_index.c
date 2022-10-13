#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	int (*ptr)(int);

	ptr = cmp;
	if (array && ptr)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (ptr(array[a]))
				return (a);
	}
	return (-1);
}
