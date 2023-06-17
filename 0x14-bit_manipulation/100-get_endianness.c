#include "main.h"

/**
 * get_endianness - theEntry point
 * Description - 'checks if a machine is a little or a big endian'
 * Return: this should return 0 if it is big, 1 if it is little
 */

int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}
