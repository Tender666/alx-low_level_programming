#include "main.h"
/**
 * _puts -  prints a string
 * @str: strimng to print
 * _putchar -prints characterto next line
 * Return: 0 always
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
