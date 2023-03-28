#include "main.h"
/**
 * print_rev - prints a reversed string
 * @s: the string to be printed
 * Return: 0 always
*/
void print_rev(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}

	while (str_len < 0)
	{
		_putchar(*s);
		s--;
		str_len--;
	}
	_putchar('\n');
}
