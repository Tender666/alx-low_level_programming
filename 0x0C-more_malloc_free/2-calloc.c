#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area to be filled.
 * @b: Character to copy.
 * @n: Number of times to copy 'b'.
 *
 * Return: Pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    char *ptr = s;

    for (i = 0; i < n; i++, ptr++)
    {
        *ptr = b;
    }

    return (s);
}

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory.
 *         If 'nmemb' or 'size' is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    char *p;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(size * nmemb);

    if (ptr == NULL)
        return (NULL);

    p = ptr;

    while (nmemb--)
    {
        _memset(p, 0, size);
        p += size;
    }

    return (ptr);
}

