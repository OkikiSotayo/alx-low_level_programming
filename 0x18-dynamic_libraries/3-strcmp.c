#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 *
 * Return: value less than 0 if string less than other
 */

int _strcmp(char *s1, char *s2)
{
	int count, strcmp;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}

	strcmp = s1[count] - s2[count];
	return (strcmp);
}
