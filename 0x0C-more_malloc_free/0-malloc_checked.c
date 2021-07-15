#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - alloc an space for an array
 *
 * @b: size of b
 *
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	{
		if (d == NULL)
			exit(98);
	}
	return (d);
}
