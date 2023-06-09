#include "main.h"
#include <string.h>


/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: the input string
 * Return: the reversed string
*/
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[strlen(s) - 1]);
	_print_rev_recursion(s[strlen(s) - 2]);
}
