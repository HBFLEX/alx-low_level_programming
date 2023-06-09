#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string input
 * Return: the string length
*/
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
