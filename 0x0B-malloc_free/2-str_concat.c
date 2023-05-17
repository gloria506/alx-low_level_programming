#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description - 'a function concantenating two strings, using malloc'
 * @s1: char string type
 * @s2: char string type
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, h, j;
	char *addlens;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (h = 0; s1[len1] != '\0'; h++)
	{
		len1++;
	}

	for (h = 0; s2[len2] != '\0'; h++)
	{
		len2++;
	}
	addlens = malloc((len1 + len2 + 1) * sizeof(char));

	if (addlens == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < len1; h++)
	{
		addlens[h] =  s1[h];
	}
	for (j = 0; j < len2; j++)
	{
		addlens[h + j] = s2[j];
	}
	return (addlens);
}
