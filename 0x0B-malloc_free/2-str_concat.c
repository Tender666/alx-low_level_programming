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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
