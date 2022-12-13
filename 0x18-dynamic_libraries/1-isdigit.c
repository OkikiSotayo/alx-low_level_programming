#include "main.h"

/**
 * _isdigit - checks for a digit in a character
 * @c: tested charcter
 * Return: 1 if correct, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
