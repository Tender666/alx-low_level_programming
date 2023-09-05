#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a
 *               specific character.
 * @size: The size of the array to create.
 * @c: The character used for initialization.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
