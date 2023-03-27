#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string t be printed
 * Return: 0 always
*/
void _puts(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str_len++;
	}

	for (i = 0; i < str_len; i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
