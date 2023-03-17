#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
