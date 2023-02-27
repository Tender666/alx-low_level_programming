#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: 0 success
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)

	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		putchar(s[count]);
	putchar('\n');
}
