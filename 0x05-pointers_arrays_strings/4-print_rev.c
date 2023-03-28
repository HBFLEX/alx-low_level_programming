#include "main.h"
/**
 * print_rev - prints a reversed string
 * @s: the string to be printed
 * Return: 0 always
*/
void print_rev(char *s)
{
	int str_len = 0;
	int i;

	while (*s != '\0')
	{
		str_len++;
	}

	while (str_len < 0)
	{
		_putchar(*s--);
		str_len--;
	}
	_putchar('\n');
}
