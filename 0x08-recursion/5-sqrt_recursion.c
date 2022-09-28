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
