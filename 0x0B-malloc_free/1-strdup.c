#include <main.h>
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
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}

