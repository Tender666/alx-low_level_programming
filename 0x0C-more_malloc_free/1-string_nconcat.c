#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: A pointer to the concatenated string (s1 + first n characters of s2)
 *         If memory allocation fails or n is greater than or equal to the
 *         length of s2, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated = malloc(len1 + n + 1); /* +1 for the null terminator */

	if (concatenated == NULL)
		return (NULL);

	strncpy(concatenated, s1, len1);
	strncat(concatenated, s2, n);
	concatenated[len1 + n] = '\0';

	return (concatenated);
}

