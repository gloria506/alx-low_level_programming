#include <stdio.h>

void get(void) __attribute_((constructor));

void get(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!,\n");
}
