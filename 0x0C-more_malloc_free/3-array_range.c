#include <stdlib.h>
#include "main.h"
/**
 * array_range - Create an array of integers from min to max (inclusive).
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: Pointer to the newly created array, or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	int value = min;
	int *ptr = arr;

	while (value <= max)
	{
		*ptr = value;
		value++;
		ptr++;
	}

	return (arr);
}

