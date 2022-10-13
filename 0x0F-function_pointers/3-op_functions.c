#include "3-calc.h"

/**
 * op_add - function for additional operation
 * @a: integer a
 * @b: integer b
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function for subtraction operation
 * @a: integer a
 * @b: integer b
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function for another operation
 * @a: integer a
 * @b: integer b
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function for division operation
 * @a: integer a
 * @b: integer b
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function  subt operation
 * @a: integer a
 * @b: integer b
 *
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);


}
