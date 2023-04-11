#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, firstNumber, secondNumber, result;

	if (argc < 2)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(atoi(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		firstNumber = atoi(argv[1]);
		secondNumber = atoi(argv[2]);
		result = firstNumber + secondNumber;
		printf("%d\n", result);
		return (0);
	}
}
