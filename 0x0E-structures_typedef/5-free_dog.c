#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - the Entry point
  * Description - 'a function that frees dogs'
  * @d: contains struct
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
