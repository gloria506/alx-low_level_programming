#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * Description - 'a function that concatenates two strings with'
 * @s1: char string type
 * @s2: char string type
 * @n: number of bytes
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, h;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	n = len2;
	ptr = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	return (NULL);

	for (h = 0; h < len1; h++)
	{
		ptr[h] = s1[h];
	}
	for (; h < (len1 + n); h++)
	{
		ptr[h] = s2[h - len1];
	}
	ptr[h] = '\0';
return (ptr);
}
