#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates the requested memory and returns a pointer to it.
 *
 * @nmemb: a count.
 * @size: the size of the memory to print.
 *
 * Return: the success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *i, ii;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii < nmemb * size; ii++)
		((char *)i)[ii] = 0;
		return (i);
}
