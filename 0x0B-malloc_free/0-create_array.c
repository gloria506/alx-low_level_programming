#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Entry point
 * Description - 'a function that creates an array of chars'
 * @size: size of the array
 * @c: char type
 * Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int h;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (NULL);
	}

	for (h = 0; h < size; h++)
	{
		array[h] = c;
	}

	array[h] = '\0';

	return (array);

}
