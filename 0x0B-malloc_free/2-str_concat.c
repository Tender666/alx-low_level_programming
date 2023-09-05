#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be included in the concatenation.
 * @s2: The second string to be appended to the first.
 *
 * Return: A pointer to a newly allocated memory space containing the
 * concatenated string (s1 followed by s2 and null-terminated), or NULL
 * in case of memory allocation failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, c = 0, b = 0;
	char *result;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			c++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			b++;
	}

	int len = c + b;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		result[i] = s1[i];

	for (j = 0; j < b; j++, i++)
		result[i] = s2[j];

	result[len] = '\0';

	return (result);
}

