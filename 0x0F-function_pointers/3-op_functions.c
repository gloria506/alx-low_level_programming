#include "3-calc.h"

/**
  * op_add - this calculates the sum of two integers
  * @a: first integer
  * @b: second integer
  * Return: sum of a and b;
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - a function that checks difference between two integers
  * @a: first integer
  * @b: second integer
  * Return: difference between a and b;
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Entry point
  * Description - 'a function that returns products of two integers'
  * @a: first integer
  * @b: second integer
  * Return: product of a and b;
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Entry point
  * Description - 'a function that divides two integers'
  * @a: first integer
  * @b: second integer
  * Return: divided value of a and b;
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 * Description - 'calculates the remainder of the division of two integers'
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
