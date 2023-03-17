#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		putchar('\n');
		a++;
	}

	return (0);
}
