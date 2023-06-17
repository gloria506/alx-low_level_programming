#include "main.h"
#include <stdio.h>

/**
 * print_binary - the entry point
 * Description - this prints out binary equivalent of a number
 * @n:the number  number to be printed in binary
 * Return: return void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

