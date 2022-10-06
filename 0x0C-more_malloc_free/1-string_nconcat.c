#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory
 * when malloc fails, the value equres 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *root;
	unsigned int ls1, ls2, lroot, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lroot = ls1 + n;

	root = malloc(lsout + 1);

	if (root == NULL)
		return (NULL);

	for (i = 0; i < lroot; i++)
		if (i < ls1)
			root[i] = s1[i];
		else
			root[i] = s2[i - ls1];

	root[i] = '\0';

	return (sout);
}
