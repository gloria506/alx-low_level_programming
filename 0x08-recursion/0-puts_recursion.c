#include "main.h"
#include <stdio.h>

/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: On success, returns the character to be printed.
 * On error, returns EOF.
 */

int _putchar(char c)
{
	return (putchar(c));
}

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
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	char *str = "Puts with recursion";

	_puts_recursion(str);

	return (0);
}
