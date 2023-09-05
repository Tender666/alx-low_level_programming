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
    char *array;  // Pointer to the dynamically allocated array

    // Check if the requested size is 0, and return NULL if so
    if (size == 0)
        return (NULL);

    // Allocate memory for the array using malloc
    array = (char *)malloc(sizeof(char) * size);

    // Check if memory allocation was successful
    if (array == NULL)
        return (NULL);

    // Initialize each element of the array with the specified character
    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return (array);  // Return a pointer to the created array
}

