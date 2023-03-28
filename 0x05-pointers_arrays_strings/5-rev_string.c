#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0 always
*/
void rev_string(char *s)
{
	int str_len = 0;
	int i;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}

	int reversed_string[str_len];

	for (i = str_len; i >= 0; i--)
	{
		reversed_string[str_len - i] = s[i];
	}

	for (i = 0; i < str_len; i++)
	{
		*(s + i) = reversed_string[i];
	}
}
