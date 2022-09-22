#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @x: point to string
 *
 * Return: point to uppercase string
 */

char *string_toupper(char *x)
{
	int length;

	length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
