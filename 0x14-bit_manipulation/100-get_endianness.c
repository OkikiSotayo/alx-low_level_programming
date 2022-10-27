#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 or 1 based on size
 *
 */

int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
