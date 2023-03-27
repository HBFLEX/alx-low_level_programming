#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: the string t be printed
 * Return: 0 always
*/
void _puts(char *str)
{
	int str_len = strlen(*str);

	for (i = 0; i < str_len; i++)
	{
		_putchar(*str[i]);
	}
	_puctahr(*str);
}
