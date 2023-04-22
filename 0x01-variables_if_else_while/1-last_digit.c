#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -the entry point
 * description - 'printing last digit of randon number'
 * Return: ALways 0 (Sucess)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf
	return (0);
}
