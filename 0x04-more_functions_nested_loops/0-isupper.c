#include "main.h"
#include <stdio.h>

/**
  * 0_isupper - check code
  * Description - 'checking whether a variable c is uppercased or not'
  * @c: character to be checked
  * Return: 1 if uppercase, return 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

