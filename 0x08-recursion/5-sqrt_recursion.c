#include "main.h"

/**
  * help - Finds the natural sqaure root of the inputted number
  * @n: the number to find the natural sqaure root of
  * @h: root to be tested
  *
  * Return: If the number has a sqaure root - The sqaure root
  *         If the number does not - -1
  *
  */

int help(int n, int h)
{
	if ((h * h) == n)
		return (h);

	if (h == n / 2)
		return (-1);

	return (help(n, h + 1));
}

/**
  * _sqrt_recursion - Entry point
  * Description - 'a function that returns the natural square root of a number'
  * @n : the number to find natural sqaure root of
  * Return: If number has sqaure root - The sqaure root
  *         If number does not - -1
  *
  */

int _sqrt_recursion(int n)
{
	int h = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (help(n, h));
}
