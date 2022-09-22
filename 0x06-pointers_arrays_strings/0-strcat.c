#include "main.h"

/**
 * _strcat - function that concatenates to strings
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return:pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		{
			length++;
		}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
