#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme.
 * Return: 0 Always.
 */
int main(void)
{
	int i, r;
	char password[11];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		r = rand() % 162;
		if (r < 6)
		password[i] = 'a' + r;
		else if (r < 52)
		password[i] = 'A' + (r - 6);
		else
		password[i] = '0' + (r - 52);
	}

	password[10] = '\0';
	printf("%s\n", password);

	return (0);
}
