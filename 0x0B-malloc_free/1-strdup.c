#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of a given string.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
