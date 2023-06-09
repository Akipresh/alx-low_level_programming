#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 * @array: Pointer to the array in question
 * @size: size of the array
 * @action: Pointer to the function to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
