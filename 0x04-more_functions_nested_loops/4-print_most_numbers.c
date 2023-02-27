#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * must not print 2 or 4
 *
 * Return:void
 */
void print_most_numbers(void)

{
	char b;

	for (b = '0'; b <= '9' ; c++)
	{
		if (!(b == '2' || b == '4'))
			_putchar(b);
	}
	_putchar('\n');
}
