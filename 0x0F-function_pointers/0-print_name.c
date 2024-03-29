#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - the Entry point
  * Description - 'A function that prints a name'
  * @name: pointer storing char
  * @f: function pointer
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
