#include <stdio.h>
/**
 * main - sizes of data types using print
 * Return; 0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(S)\n", (lu = unsigned long)sizeof(a));
	printf("Size of  int: %lu byte(S)\n", (lu = unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (lu = unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (lu = unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (lu = unsigned long)sizeof(e));
	return (0);
