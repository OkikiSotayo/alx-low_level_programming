#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: pointer to the strings of 0 & 1 chars
 *
 * Return: the converted number, or 0 on coditions
 * b is NULL or one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a, base;
	unsigned int val;

	val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
		;

	for (a--, base = 1; a >= 0; a--, base *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		if (b[a] & 1)
			val += base;
	}

	return (val);
}
