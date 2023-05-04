#include "main.h"

/**
  * _puts - Entry point
  * Description - 'a function printing a string, with a new line'
  * @str: string to be printed
  * Return: void
  */

void _puts(char *str)
{
	int h = 0;

	while (str[h])
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
