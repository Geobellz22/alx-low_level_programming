#include "search_algos.h"

/**
 * linear_search - search algorithm for a value in an array
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in an array
 * @value: value to search for
 * Return: index of value or -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[1]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
