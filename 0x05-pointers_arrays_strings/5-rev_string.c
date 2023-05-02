#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string inputs
 *
 */

void rev_string(char *s)
{
	int a, b, c, temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		temp = s[c];
		s[c] = s[b];
		s[b] = temp;
		c++;
		b--;
	}
}
