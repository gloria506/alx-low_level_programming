#include "main.h"

/**
 * clear_bit - the Entry point
 * Description - 'thesets value of a given bit to 0'
 * @n: this is the bit
 * @index: the index of the bit to set to 0
 * Return: this should return 1 if it worked, -1 if an error ocurred'
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
