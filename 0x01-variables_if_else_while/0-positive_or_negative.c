#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing number positive or negtative
 *
 * Decription: using the function
 * this program prints
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if ( n >0 )
	{
		printf("%i is positive\n", n);
	}
	else if ( n == 0 )
	{
		printf("%i is xero\n", n);
	}
	else if ( n < 0 )
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
