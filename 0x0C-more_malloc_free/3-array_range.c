#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array from min to max
 *
 * @min: min of array
 * @max: max of array
 *
 * Return: a pointer.
 */

int *array_range(int min, int max)
{
	int *i;
	int ii, d, dd;

	if (min > max)
	{
		return (NULL);
	}
	dd = (max - min) + 1;
	i = (int *)malloc(sizeof(int) * dd);
	if (i == NULL)
	{
		return (NULL);
	}
	for (ii = min, d = 0; d < dd; ii++, d++)
	{
		i[d] = ii;
	}
	return (i);
}
