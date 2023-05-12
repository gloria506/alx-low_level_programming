#include "main.h"

/**
  * _puts_recursion - Entry point
  * Description - 'a function that printsa string, followed by a new line'
  * @s: the char string type
  * Return: void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n);
	return;
	}
	_putchar(*s);
	_puts_rescursion(s +1);
}
