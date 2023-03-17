#include <stdio.h>

/**
 * main - prtints all base 10 numbers from 0 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i < 'k')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
