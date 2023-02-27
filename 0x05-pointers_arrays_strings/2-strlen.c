#include "main.h"
/**
 * _strlen -return length of string
 *  @s : pointer to the string
 * Return:0 always
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
