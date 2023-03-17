#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
