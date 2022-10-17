#include "function_pointers.h"
/**
 * array_iterator - Function that executes a function given as
 * a parameter
 * on each element of an array
 * @array: array of functions
 * @size: size of functions
 * @action: pointer to the required function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
