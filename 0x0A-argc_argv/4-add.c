#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that writes positive numbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: if one of the numbesrs contain symbols that are not digital
 * print 1, else return 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
