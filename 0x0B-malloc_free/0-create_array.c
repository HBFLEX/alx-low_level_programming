#include "main.h"
#include <stdlib.h>


/**
 * create_array - create array of specified size and assigns a char
 * @size: the size of the array
 * @c: the char to assign
 * Return: NULL if fails, pointer to array if okay
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
