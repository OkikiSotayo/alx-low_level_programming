#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: pointer to copy
 * @src: pointer to string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src);
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
