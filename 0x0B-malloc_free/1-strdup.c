#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates to a new memory space
 * @str: char
 * Return: NULL if fails, pointer to array if okay
*/

char *_strdup(char *str)
{
	char *arr;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
	{
		arr[r] = str[r];
	}

	return (arr);
}
