#include <stdio.h>

/**
 * main - prints the sizes of various types in a computer
 * Return: 0 (Success)
*/

int main(void)
{
	char c;
	int n;
	long int ln;
	long long int lln;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lln));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
