#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if man > mix, returns NULL
 */

int *array_range(int min, int max)
{
	int *pt;
	int i;

	if (min > max)
		return (NULL);

	pt = malloc(sizeof(*pt) * ((max - min) + 1));

	if (pt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		pt[i] = min;

	return (ar);
}
