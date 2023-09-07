#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a character limit.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to the concatenated string.
 *         If memory allocation fails or n is greater than or equal to the
 *         length of s2, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	concatenated = malloc(len1 + n + 1); /* +1 for the null terminator */

	if (concatenated == NULL)
		return (NULL);

	while (i < len1)
	{
		concatenated[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		concatenated[i] = s2[j];
		i++;
		j++;
	}

	concatenated[i] = '\0';

	return (concatenated);
}

