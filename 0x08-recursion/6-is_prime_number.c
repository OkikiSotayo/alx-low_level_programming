#include "main.h"

/**
 * helperFunction - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @num: number to be checked
 * @i: possible number factor
 *
 * Return: 0 if not prime, 1 if prime
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - to check if it is prime number or not
 * @n: number to be checked
 *
 * Return: 1 if prime number
 * 0 if not prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
