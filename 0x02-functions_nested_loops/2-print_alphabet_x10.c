#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 * Return: 0 always
*/
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
