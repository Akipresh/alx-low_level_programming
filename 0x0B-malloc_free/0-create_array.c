#include <stdlib.h>
#include "main.h"

/**
* create_array -  a function that creates an array of chars,
* and initializes it with a specific char
* @size: size of the array
* @c: character ofthe array
*
* Return: a pointer to the array or character
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int j;

if (size == 0)
{
return (NULL);
}

arr = (char *)malloc(sizeof(char) * size);

if (arr == NULL)
{
return (NULL);
}

for (j = 0; j < size; j++)
arr[j] = c;
return (arr);
}
