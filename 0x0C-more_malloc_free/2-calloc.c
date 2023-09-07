#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array and initialize to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	void *p;

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

