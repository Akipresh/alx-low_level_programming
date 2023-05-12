#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check if a character is upper case
 * @c: character to be checked
 * Return: Always 1 if upper case, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
