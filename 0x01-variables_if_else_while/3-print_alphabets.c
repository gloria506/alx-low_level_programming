#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabet in lower case and then in uppercase'
  *returns 0 to the operating system upon successful completion
  */
int main(0)
{
	int n = 97;
	int m = 65;

	while (n < 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
