#include "main.h"

/**
 * helperFunction - function that returns the natural square root of a number
 * @num: number
 * @pSqrt: poissible sqrt of number
 *
 * Return: sqrt of number -1 for error
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the root of a number
 * @n: number to find square root
 *
 * Return: square root of n
 * -1 if n has no sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));

}
