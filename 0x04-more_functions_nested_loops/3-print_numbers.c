#include "stdio.h"

/**
*print_most_numbers - prints
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
