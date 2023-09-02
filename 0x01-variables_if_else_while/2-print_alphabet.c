#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block

 * Description: a program that prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (pass)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
