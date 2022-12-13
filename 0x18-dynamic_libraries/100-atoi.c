#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int index, ind2;
	unsigned int vex;
	int sign = 1;
	char mat;

	index = 0;
	vex = 0;
	while (*(s + index) != '\0')
	{
		mat = *(s + index);
		if (mat == '-')
		{
			sign *= -1;
		}
				if (mat >= '0' && mat <= '9')
				{
					ind2 = index;
					while (*(s + ind2) > 47 && *(s + ind2) < 58)
					{
						vex = (vex * 10) + *(s + ind2) - '0';
						ind2++;
					}
					break;
				}
				index++;
	}
	if (sign < 0)
		vex *= sign;
	return (vex);
}
