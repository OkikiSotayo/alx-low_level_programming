#include "main.h"
#include <stdio.h>

/**
 * *_strlen - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
