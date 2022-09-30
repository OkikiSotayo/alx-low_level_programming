#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be tested
 * Return: 1 if it is, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
