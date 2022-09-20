#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 *
 * Return: 0
 */

int main(void)
{
	int test, lab;

	srand(time(NULL));
	lab = 0;
	while (lab <= 2645)
	{
		test = (rand() % 128);
		lab += test;
		printf("%c", test);
	}
printf("%c", 2772 - lab);

return (0);
}
