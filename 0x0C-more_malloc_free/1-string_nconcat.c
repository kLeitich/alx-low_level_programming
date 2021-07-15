#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - a counter for the char s.
 *
 * @s: char.
 *
 * Return: the success.
 */

int _strlen(char *s)

{
	int i = 0;

	while (*(s + i) != 0)
		i++;
	return (i);
}

/**
 * string_nconcat - concatenated 2 string but n bytes of s2.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: two strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int sizei, sizeii, i, ii;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	sizei = _strlen(s1);
	sizeii = _strlen(s2);
	if (n > sizeii)
	{
		n = sizeii;
	}
	c = malloc(sizeof(char) * (sizei + n) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizei; i++)
	{
		c[i] = s1[i];
	}
	for (ii = 0; ii < n; ii++)
	{
		c[i + ii] = s2[ii];
	}
	{
		c[i + ii] = '\0';
		return (c);
	}
}
