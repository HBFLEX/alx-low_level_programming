#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0 Success
*/
void  print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
