#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * @c: the character to be checked
 * Return: 0 always
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
