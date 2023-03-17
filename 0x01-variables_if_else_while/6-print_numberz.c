#include <stdio.h>

/**
 * main - prtints all base 10 numbers from 0 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
