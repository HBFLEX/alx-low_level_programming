#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 * Return: 0 always
*/
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
