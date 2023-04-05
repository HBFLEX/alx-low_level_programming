#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string input
 * Return: the string length

*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (strlen(s) == 0)
		return 0;
	
	_strlen_recursion(s + 1);
	return i++;
}
