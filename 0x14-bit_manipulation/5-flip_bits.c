#include "main.h"

/**
 * flip_bits - the Entry point
 * Description - 'function that returns the number of bits you would need to
 *                flip to get from one number to another'
 * @n: the number
 * @m:  number to flip n to
 * Return: tthis should return the number of bits required to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, bits = 0;
	unsigned long int currnt;
	unsigned long int exclu = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		currnt = exclu >> h;
		if (currnt & 1)
			bits++;
	}

	return (bits);
}
