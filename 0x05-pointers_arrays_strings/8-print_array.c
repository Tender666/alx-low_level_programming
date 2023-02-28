#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: pointer to an integer array
 * @n: input of n elements
 * Return: 0 Always
 */
void print_array(int *a, int n)
{
	int i = 10;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
