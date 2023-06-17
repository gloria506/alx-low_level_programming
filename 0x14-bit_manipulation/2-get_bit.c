#include "main.h"

/**
 * get_bit - the Entry point
 * Description - 'the function returns the value of a bit at a given index'
 * @index: this gives index of bit
 * @n: the bit
 * Return: this should return -1 if an error occurs, otherwise return the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
