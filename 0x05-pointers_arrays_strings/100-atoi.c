#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer.
 * @str: String to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			break;
		}
		result = result * 10 + (stre[i] - '0');
	}

	return (sign * result);
}
