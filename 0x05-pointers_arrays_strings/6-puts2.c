#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
