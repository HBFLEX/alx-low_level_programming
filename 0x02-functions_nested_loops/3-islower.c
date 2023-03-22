#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: the character to be checked
 * Return: 0 always
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
