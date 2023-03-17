#include <stdio.h>

/**
 * main - prints all alphabets in lowercase except for q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');

	return (0);
}
