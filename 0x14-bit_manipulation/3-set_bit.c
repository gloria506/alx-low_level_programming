#include "main.h"

/**
 * set_bit - the Entry point
 * Description - 'sets a bit at a given index to 1'
 * @n: this is the pointer to the  bit
 * @index: this  gives  index to set to 1
 * Return: this should return 1 if it worked, and -1 if an error occurs'
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /*if index is greater than maximum index for 64-bit*/
		return (-1);

	*n ^= (1 << index);

	return (1);
}
