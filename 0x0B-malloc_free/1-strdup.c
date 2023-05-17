#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Description - 'a function that returns a pointer to a newly allocated mem'
 * @str : char string type
 * Return: pointer to char
*/

char *_strdup(char *str)
{
	char *new_s;
	int length;  /*iterator for length of str*/
	int j;  /*iterator for new_s*/

	if (str == 0)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new_s = malloc(sizeof(char) * (length + 1));

	if (new_s == 0)
	{
		return (NULL);
	}

	for (j = 0; j < length; j++) /*loop copying details of str into new_s*/
	{
		new_s[j] = str[j];
	}

	new_s[j] = '\0';

	return (new_s);
}

